
#include <iostream>

// Массив int[10], 
// взять указатель (тип можно варировать) на первый элемент и 
// с помощью арифметики указателей вывести 4 элемент массива.

// В ответе прикрепите ссылку на репозиторий с решением


int main() {

    // создаем массив
    int array[10] = {0};

    // наполняем числами
    for (int i = 0; i < 10; ++i) {
        array[i] = i;
    }

    // берем указатель на нулевой элемент
    int *x = array;
    std::cout << *x << std::endl;
    // прибавляем четыре
    x += 4;
    // получаем четвертый элемент
    std::cout << *x << std::endl;

}