#include <thread>
#include <mutex>
#include <iostream>
#include <vector>


// Разработайте программу, 
// демонстрирующую создание двух потоков в C++, 
// где один поток пишет данные в переменную,
// а другой читает из нее, с использованием мьютексов для синхронизации доступа.

// В ответе прикрепите ссылку на репозиторий с решением

void update(std::vector<int> &vec, int &var, std::mutex &mutex) {
    for (int i = 0; i < 10; ++i) {
        // создаем мьютекс перед доступом к критической секции
        std::lock_guard guard(mutex);
        vec.emplace_back(++var);
    }
}

int main() {

    // переменная, которая будет меняться в потоках
    std::vector<int> vec;
    int a = 0;
    std::mutex mut;

    std::thread thread1(update, std::ref(vec), std::ref(a), std::ref(mut));
    std::thread thread2(update, std::ref(vec), std::ref(a), std::ref(mut));

    // ждем завершения работы потоков
    thread1.join();
    thread2.join();

    for (auto x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

}