/*--------------------------------------------------------------------------*/
// Задание звучит так: 
// Напишите функцию, которая инвертирует только выбранные биты в участке памяти, 
// заданном указателем и длиной в байтах. 
// Способ выбора битов для инвертирования на ваше усмотрение.
/*--------------------------------------------------------------------------*/

// Программу можно скомпилировать с флагами:
// UINT64 - для теста используется одно 64 битное число
// MULTITHREADING - программа запускается многопоточно
// По умолчанию программа тестируется на массиве из 8 байт в однопоточном режиме.

#include <atomic>
#include <algorithm>
#include <bitset>
#include <cstdint>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include <set>



// функция для инвертирования 
// принимает: указатель на начало (любого типа), длину в байтах, контейнер с индексами битов для инверсии
// используется std::set, потому, что значения в нем отсортированы и уникальны
// возвращает: bool - "успешно ли прошла операция?"
bool invert_bits(void *start_point, size_t size, const std::set<size_t> &idx, std::mutex *mutex = nullptr) {

    std::cout << std::this_thread::get_id() << std::endl;
    // если индексов нет - ничего делать не нужно, возвращаем true
    if (idx.empty()) return true;
    // получаем наибольшее значение из списка индексов (последнее значение в сете)
    auto max_bit = *idx.rbegin();

    // если количество битов в инвертируемой последовательности
    // меньше, чем наибольший индекс - возвращаем false
    if (((size) * 8) <= max_bit) {
        std::cerr << "Index " << max_bit << " greater than bit sequence\n";
        return false;
    }

    // реинтерпретируем абстрактный участок памяти как последовательность байт
    // std::atomic<uint8_t> *start = static_cast<std::atomic<uint8_t>*>(start_point);
    uint8_t *start = static_cast<uint8_t*>(start_point);
    
    // проходим по всем индексам битов, которые нужно инвертировать
    for (auto id : idx) {
        // создаем маску для одного бита, смещенного на искомую позицию (без учета номера байта)
        uint8_t mask = 1u << (id % 8);
        // ищем байт, в котором нужно применить полученную маску 
        // (последовательность байтов мы расцениваем как единую сущность)
        auto position = (start) + (id / 8);
        // накладываем маску
        if (mutex != nullptr) { std::lock_guard guard(*mutex); } // если многопоточная обработка - лочим мьютекс
        *position ^= mask; 
    }

    // все хорошо - возвращаем true
    return true;
}


// многопоточная версия инверсии битов на случай большого списка индексов
// обрабатываемый отрезок памяти не делится на части, поскольку нужный байт определяется на лету с помощью арифметики указателей
// и требует сложной балансировки на случай, если значения индексов смещены в ту или иную сторону 
// (например, если много индексов больше миллиона, и мало остальных)
// на части делится сам список индексов
bool invert_bits_multithreading(
    void *start_point, 
    size_t size, 
    const std::set<size_t> &idx, 
    const size_t min_job_size = 1000 // минимальное количество индексов, при котором имеет смысл запустить многопоточность
) {

    // если нужно обработать менее тысячи индексов - работаем в одном потоке
    if (idx.size() < min_job_size) {
        return invert_bits(start_point, size, idx);
    }

    // вычисляем возможное количество потоков
    const size_t hardware_threads = std::thread::hardware_concurrency();
    const size_t max_threads = (hardware_threads == 0 ? 2 : hardware_threads);
    const size_t num_threads = std::min(max_threads, (size + min_job_size - 1) / min_job_size);

    // создаем мьютекс для защиты от состояния гонки при наложении маски в одном байте из разных потоков 
    std::mutex mutex{};

    // получаем размер частей, на которые нужно поделить список индексов
    size_t part_size = idx.size() / num_threads;

    // создаем вектор для хранения потоков
    std::vector<std::thread> threads;
    // делим список индексов на части и запускаем в отдельном потоке (кроме последней части)
    // получаем итераторы списка индексов
    auto begin = idx.begin();
    auto end = idx.begin(); 
    for (size_t i = 0; i < num_threads - 1; ++i) {
        // смещаем итераторы списка индексов, чтобы получить отрезки размера part_size
        std::advance(begin, i * part_size);
        std::advance(end, (i + 1) * part_size);
        // создаем сет, хранящий часть индексов
        std::set<size_t> idx_partition{begin, end};
        
        // добавляем данные в поток, а поток в вектор (в функции указываем режим многопоточности)
        threads.emplace_back(invert_bits, start_point, size, idx_partition, &mutex);
    }
    // получаем последнюю часть
    std::set<size_t> idx_partition{end, idx.end()};
    // (в функции указываем режим многопоточности)
    bool success = invert_bits(start_point, size, idx_partition, &mutex);

    // дожидаемся выполнения потоков 
    for (auto& t : threads) {
        t.join();
    }

    // все прошло успешно
    return success;

}


// вспомогательная функция для отображения участка памяти в виде битов
void show_sequence(void *start_point, size_t size) {
    
    // реинтерпретируем абстрактный участок памяти как последовательность байт
    uint8_t *start = static_cast<uint8_t*>(start_point);

    while (size) {
        // итерируемся задом наперед, поскольку биты считаются справа налево 
        std::cout << std::bitset<8>(*(start + size - 1));
        size--;
    }
    std::cout << std::endl;
}



int main() {

    // создаем последовательность байтов (имитируют участок памяти)
#if UINT64
    // используем для теста либо одно число (в данном примере большое 64-битное) 
    uint64_t x = 1234567890987654321; 
    uint64_t *seq = &x;
    // получаем размер последовательности в байтах
    size_t seq_size = sizeof(x);
    // std::cout << std::bitset<64>(*seq) << std::endl;
#else 
    // либо последовательность байтов (в данном примере из 8 байтов или 64 битов)
    // задаем размер последовательности
    constexpr size_t seq_size = 8;
    uint8_t seq[seq_size] = {15, 30, 45, 60, 75, 90, 105, 120};
#endif
    
    // задаем индексы битов, которые нужно инвертировать 
    // (индексы считаются справа налево, от младшего бита к старшему)
    std::set<size_t> idx{0, 1, 2, 3, 4, 5, 6, 7, 32, 33, 34, 35, 36, 37, 38, 39, 40, 60, 61, 62, 63};

    // смотрим исходную последовательность битов
    show_sequence(seq, seq_size);
    // инвертируем
#if MULTITHREADING
    // многопоточная версия (индексы делятся на части по 8 штук)
    bool success = invert_bits_multithreading(seq, seq_size, idx, 8);
#else
    // однопоточная версия
    bool success = invert_bits(seq, seq_size, idx);
#endif
    // если что то пошло не так - прерываем программу с ошибкой
    if (!success) {
        std::cerr << "Not success" << std::endl;
        return 1;
    }
    // смотрим получившуюся последовательность
    show_sequence(seq, seq_size);

    return 0;

}


