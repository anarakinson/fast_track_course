
// Задание 2 (30 баллов): 
// Напишите библиотеку, реализующую шаблонный класс для односвязного списка
// c поддержкой операций вставки, удаления и поиска заданного элемента.

#pragma once

#include <cstdint>
#include <iostream>


// шаблонный класс для элемента списка 
// хранит ссылку на следующий элемент и непосредственно данные
template <typename T>
class Node {
public:

    Node() = default;
    // копирование запрещено
    Node(const Node<T> &other) = delete;
    Node<T> &operator = (const Node<T>&) = delete;
    // при перемещении просто меняем местами данные из старой ноды и новой
    Node(Node<T> &&other) {
        std::swap(next, other.next);
        std::swap(data, other.data);
    }
    // оператор присваивания будeт определен по умолчанию
    Node<T> &operator = (Node<T>&&) = default;

    ~Node() {
        // std::cout << "Node " << data << " destroyed" << std::endl;
    }

    // ссылка на следующий элемент списка
    Node* next = nullptr;
    // данные, которые хранит узел
    T data{};

};


template <typename T>
class List {
public:

    List() = default;
    // конструктор копирования
    List(const List<T> &other) {
        auto it = other.first();
        while (it != nullptr) {
            // копируем из начала старого вектора и кладем в конец нового
            insert(*it, m_size);
            ++it;
        }
    }
    // конструктор перемещения
    List(List<T>&& other) {
        while (other.first() != nullptr) {
            // перемещаем из начала старого вектора и кладем в конец нового
            insert(std::move(*other.first()), m_size);
            // старую ноду все равно нужно удалить
            other.pop_front();
        }
    }

    // операторы определятся по умолчанию на основе конструкторов
    List<T> &operator = (const List<T>&) = default;
    List<T> &operator = (List<T>&&) = default;
    // деструктор уничтожает все ноды в динамической памяти
    ~List() {
        while (m_first != nullptr) {
            pop_front();
        }
    }

    class iterator;

    // функция для добавления новых данных в начало списка
    void push_front(T data) {
        // увеличиваем размер списка
        ++m_size; 
        // если первой ноды нет - создаем новую и объявляем первой
        if (m_first == nullptr) {
            m_first = new Node<T>;
            m_first->data = data;
            m_first->next = m_last;
            m_last = m_first;
            return;
        }
        // создаем новую ноду и кладем туда данные
        auto newNode = new Node<T>;
        newNode->data = data;
        // привязываем к новой ноде старую и назначаем ее первой
        newNode->next = m_first;
        m_first = newNode;
        return;
    }

    // функция удаляет первый эелемент списка
    void pop_front() {
        // если первый элемент равен отсутствует или размер равен нулю - ничего не делаем
        if (m_first == nullptr || m_size == 0) { return; }

        // уменьшаем размер списка
        --m_size; 
        // если в списке один элемент присваиваем первому и последнему значению nullptr
        if (m_first == m_last) {
            delete m_last;
            m_first = nullptr;
            m_last = nullptr;
            return;
        }
        // в остальных случаях убираем первую ноду 
        auto temp = m_first->next;
        delete m_first;
        // делаем следующую ноду первой
        m_first = temp;
        return; 
    }


    void insert(T value, size_t index) {
        // проверка на валидность индекса 
        // (нельзя добавить 10 индекс, если нет 9)
        if (index > m_size) { 
            // пишем в стандартный вывод предупреждение и ничего не делаем
            // как альтернатива, можно было бы использовать исключение
            error_out_of_size(index);
            return; 
        }
        // если индекс нулевой - пушим начало
        if (index == 0) { 
            push_front(value); 
            return;
        }
        // обновляем размер
        ++m_size;
        // если индекс равен размеру - вставляем в конец
        if (index == m_size - 1) {
            auto newNode = new Node<T>;
            newNode->data = value;
            m_last->next = newNode;
            m_last = newNode;
            return;
        }
        // находим значение по индексу и следующее
        auto prev = find_index(index - 1);
        auto next = prev->next;
        // создаем ноду
        auto current = new Node<T>;
        current->data = value;
        // соединяем новую ноду с предыдущей и следующей
        current->next = next;
        prev->next = current;
        return;
    }


    // функция удаляет элемент из списка по индексу
    void erase(size_t index) {
        // проверка на валидность индекса
        if (index >= m_size) { 
            // пишем в стандартный вывод предупреждение и ничего не делаем
            // как альтернатива, можно было бы использовать исключение
            error_out_of_size(index);
            return; 
        }
        // если первый элемент - вызываем pop_front
        if (index == 0) { 
            pop_front(); 
            return;
        }
        // уменьшаем размер
        --m_size;
        // находим элемент по индексу и соседей cпереди и сзади
        auto prev = find_index(index - 1);
        auto current = prev->next;
        auto next = current->next;
        // удаляем текущий элемент и соединяем его соседей между собой
        delete current;
        prev->next = next;
        // если элемент последний, помечаем как последний
        if (index == m_size) {
            m_last = prev;
        }
        return;
    }


    // поиск по значению (возвращает итератор)
    iterator find(T value) const {
        iterator ptr{m_first};
        while ((ptr != nullptr) && (*ptr != value)) {
            ++ptr;
        }
        return ptr;
    }


    // размер списка
    size_t size() const { return m_size; }
    // итератор на первую и последнюю ноды
    iterator first() const { return iterator{m_first}; }
    iterator last() const { return iterator{m_last}; }

private:
    // указатели на первую и последнюю ноды 
    Node<T> *m_first = nullptr;
    Node<T> *m_last = nullptr;

    // размер списка
    size_t m_size = 0;

    // вывод сообщения об ошибке в случае некоректного индекса
    void error_out_of_size(size_t index) const {
        std::cerr << "WARNING: index " << static_cast<int64_t>(index) << " (" << index << ") is out of size " << m_size << "\n"; 
    }

    // служебная функция для поиска ноды по индексу
    // поскольку функция служебная, здесь нет проверок на nullptr и корректность индекса - 
    // всё это должно происходить там, где функция непосредственно используется
    Node<T> *find_index(size_t index) {
        auto node = m_first;
        for (size_t i = 0; i <= index - 1; ++i) {
            node = node->next;
        } 
        return node;
    }

};


// итератор для безопасного перебора нод 
template <typename T>
class List<T>::iterator {
public:
    // дефолтный конструктор
    iterator() = default;
    // конструктор по значению сохраняет внутри указанную ноду
    explicit iterator(Node<T> *node) : m_node{node} {}

    // операторы инкремента
    iterator &operator ++ (int) {
        m_node = m_node->next;
        return *this;
    }
    iterator &operator ++ () {
        m_node = m_node->next;
        return *this;
    }
    
    // оператор разыменования возвращает значение, хранящееся в ноде
    T &operator * () {
        return m_node->data;
    }
    // операторы сравнения с нодой
    bool operator == (Node<T> *other) {
        return m_node == other;
    }
    bool operator != (Node<T> *other) {
        return m_node != other;
    }
    

private:
    // хранящаяся в итераторе нода
    Node<T> *m_node = nullptr; 

};
