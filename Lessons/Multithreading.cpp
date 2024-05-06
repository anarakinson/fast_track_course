#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <utility>  // as_const

template <class T>
class ThreadSafeQueue {
 public:
  ThreadSafeQueue() = default;
  ThreadSafeQueue(const ThreadSafeQueue&) = delete;
  ThreadSafeQueue& operator=(const ThreadSafeQueue&) = delete;

  void Push(T value) {
    std::lock_guard lock(mtx_);
    q_.push(std::move(value));
    has_value_.notify_one();
  }

  void WaitAndPop(T& value) {       // if T has lightweight default constructor
    std::unique_lock lock(mtx_);
    Wait(lock);
    value = std::move(q_.front());
    q_.pop();
  }

  std::shared_ptr<T> WaitAndPop() {  // if T has no lightweight default constructor
    std::unique_lock lock(mtx_);
    Wait(lock);
    auto result = std::make_shared<T>(std::move(q_.front()));
    q_.pop();
    return result;
  }

  [[nodiscard]] bool Empty() const noexcept {
    std::lock_guard<std::mutex> lock(mtx_);
    return q_.empty();
  }

 private:
  void Wait(std::unique_lock<std::mutex>& lock) {
    has_value_.wait(lock, [&q = std::as_const(this->q_)] { return !q.empty(); });
  }

  mutable std::mutex mtx_;
  std::queue<T> q_;
  std::condition_variable has_value_;
};

struct Message {
  int id;
  std::string user_id;
  std::string body;
};

ThreadSafeQueue<Message> message_queue;

void ReceiveMessages() {
  static std::atomic<int> id = 0;
  while (true) {
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    auto message = Message{++id, "user_id", "Hello"};
    std::cout << "Message received: " << message.id << '\n';
    message_queue.Push(std::move(message));
  }
}

void ProcessMessages() {
  while (true) {
    Message message;
    message_queue.WaitAndPop(message);
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout << "Message " << message.id << " processed\n";
  }
}

int main() {
  std::thread receiver1(ReceiveMessages);
  std::thread receiver2(ReceiveMessages);
  std::thread processor1(ProcessMessages);
  std::thread processor2(ProcessMessages);
  receiver1.join();
  receiver2.join();
  processor1.join();
  processor2.join();
  return 0;
}