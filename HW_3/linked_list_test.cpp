#include "linked_list.hpp"
#include <iostream>
#include <string>



// вспомогательная функция для вывода размера и содержимого списка
template <typename T>
void show_list(const List<T> &list) {
    std::cout << "\nList size: " << list.size() << std::endl;
    for (int i = 0; i < list.size(); ++i) {
        auto val = list.at(i);
        std::cout << val->data << " ";
    }   
    std::cout << std::endl;
}

// вспомогательная функция для вывода результата поиска
template <typename T>
void show_finded(const Node<T> *finded) {
    if (finded != nullptr)
        std::cout << "find: " << finded->data << std::endl;
    else 
        std::cout << "Find nothing" << std::endl;
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
    // создадим второй лист, чтобы проверить, корректно ли происходит копирование
    List<std::string> list2 = list;
    show_list(list2);

    list2.push_front("A");
    list2.pop_front();
    
    //----------------------------------------------------------------------------
    // создадим третий лист, чтобы проверить, корректно ли происходит перемещение
    List<std::string> list3 = std::move(list2);
    show_list(list3);

    list3.push_front("A");
    list3.pop_front();
    //----------------------------------------------------------------------------


    // вставка в случайное место
    list.insert("qwerty", 2);
    list.insert("Hello", list.size());
    list.insert("world", list.size());

    // смотрим получившийся лист
    show_list(list);

    // ищем индекс, который отсутствует в листе
    auto finded = list.at(-1);
    show_finded(finded);

    // ищем элемент, который есть в листе
    finded = list.find("12");
    show_finded(finded);

    // ищем элемент, который отсутствует в листе
    finded = list.find("112");
    show_finded(finded);

    // смотрим элементы в конце и начале листа 
    std::cout << "first node: " << list.first()->data << std::endl;
    std::cout << "last node: " << list.last()->data << std::endl;

    // удаляем элементы из листа
    list.pop_front();
    list.erase(3);
    list.erase(3);
    list.erase(list.size() - 1);

    // смотрим результат
    show_list(list);

    std::cout << "first node: " << list.first()->data << std::endl;
    std::cout << "last node: " << list.last()->data << std::endl;

}