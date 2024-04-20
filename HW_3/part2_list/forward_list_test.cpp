#include "forward_list.hpp"
#include <iostream>
#include <string>



// вспомогательная функция для вывода размера и содержимого списка
template <typename T>
void show_list(const List<T> &list, const std::string &idx) {
    std::cout << "\nList '" << idx << "' size: " << list.size() << std::endl;
    auto it = list.first();
    while (it != nullptr) {
        std::cout << *it << " ";
        it++;
    }   
    std::cout << std::endl;
}



int main() {

    // создаем типизированный лист
    List<std::string> list{};
    
    // наполняем лист с начала
    list.push_front("11");
    list.push_front("12");
    list.push_front("13");
    list.push_front("14");
    list.push_front("15");
    list.push_front("16");


    //----------------------------------------------------------------------------
    // создадим второй лист, проверить, корректно ли происходит копирование
    List<std::string> list2 = list;
    show_list(list2, "copied");

    list2.push_front("A");
    list2.pop_front();
    
    //----------------------------------------------------------------------------
    // создадим третий лист, проверить, корректно ли происходит перемещение
    List<std::string> list3 = std::move(list2);
    show_list(list3, "moved");

    list3.push_front("A");
    list3.pop_front();
    //----------------------------------------------------------------------------


    // вставка в случайное место
    list.insert("qwerty", 2);
    list.insert("Hello", list.size());
    list.insert("world", list.size());

    // смотрим получившийся лист
    show_list(list, "basic");

    // ищем элемент, который есть в листе
    auto it = list.find("12");
    if (it != nullptr) {
        std::cout << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    
    // ищем элемент, который отсутствует в листе
    it = list.find("112");
    if (it != nullptr) {
        std::cout << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    // смотрим элементы в конце и начале листа 
    std::cout << "first node: " << *list.first() << std::endl;
    std::cout << "last node: " << *list.last() << std::endl;

    // удаляем элементы из листа
    list.pop_front();
    list.erase(3);
    list.erase(3);
    list.erase(list.size() - 1);

    // смотрим результат
    show_list(list, "basic");

    std::cout << "first node: " << *list.first() << std::endl;
    std::cout << "last node: " << *list.last() << std::endl;

}
