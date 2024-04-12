#include <algorithm>
#include <bitset>
#include <cstdint>
#include <iostream>
#include <set>


// void invert(void* sector, const std::vector<size_t> &idx) {
//     for (auto id : idx) {
//         sector
//     }
// }

template <typename T>
void invert(T *sector, const std::set<size_t> &idx) {

    auto max = std::max_element(idx.begin(), idx.end());
    constexpr auto bitsize_T = sizeof(T) * 8;
    if (bitsize_T < *max) {
        std::cerr << "Max index must not be greater than " << bitsize_T << std::endl;
        return;
    }

    T mask = 0;
    for (auto id : idx) {
        mask |= (1 << id);
    }
    *sector ^= mask;
}


int main() {

    uint16_t x = 0b01010101010101;
    // std::set<size_t> idx{1, 3, 4, 5, 7, 10, 12, 15};
    std::set<size_t> idx{0, 1, 2, 3, 4, 12, 13, 14, 15, 32};

    std::cout << std::bitset<16>(x) << std::endl;

    invert<uint16_t>(&x, idx);
    std::cout << std::bitset<16>(x) << std::endl;

    return 0;

}


// Задание звучит так: 
// Напишите функцию, которая инвертирует только выбранные биты в участке памяти, 
// заданном указателем и длиной в байтах. 
// Способ выбора битов для инвертирования на ваше усмотрение.
