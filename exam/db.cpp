
#include <iostream>
#include <string>
#include <vector>
#include <memory>


// Напишите класс на C++, 
// который реализует простую систему управления базой данных студентов. 
// Каждый студент представлен структурой Student, 
// содержащей следующие поля: 
// id (целочисленный идентификатор), 
// name (строка с именем студента), 
// и age (целочисленный возраст студента). 

// Ваш класс должен обеспечивать следующие возможности:

// - Добавление нового студента в базу данных. 

// - Удаление студента по идентификатору.

// - Получение информации о студенте по идентификатору. 

// - Используйте умный указатель 
// std::shared_ptr для хранения и управления объектами студентов 
// в контейнере внутри класса (например, std::vector или std::map). 


// класс студента
class Student {
public:
    Student() = delete;
    Student(int id, std::string name, int age) :
        m_id{id}, m_name{name}, m_age{age} {
            // ...
        }
    ~Student() = default;

    // устанавливаем геттеры и сеттеры для безопасного доступа к данным
    int get_id() { return m_id; }
    std::string get_name() { return m_name; }
    int get_age() { return m_age; }

    void set_id(int id) { m_id = id; }
    void set_name(std::string name) { m_name = name; }
    void set_age(int age) { m_age = age; }

private:
    // данные
    int m_id; 
    std::string m_name; 
    int m_age;
};


struct DataBase {
public:
    
    // - Добавление нового студента в базу данных. 
    void add_student(const Student &student) {
        m_data.emplace_back(std::make_shared<Student>(student));
    }

    // - Удаление студента по идентификатору.
    void delete_student(int id) {
        // проверяем корректность индекса
        if (id < 0 || id >= m_data.size()) {
            std::cerr << "Wrong index" << std::endl;
            throw std::exception();
        }
        m_data.erase(std::next(m_data.begin(), id));
    }

    // - Получение информации о студенте по идентификатору. 
    std::shared_ptr<Student> get_student(int id) {
        // проверяем корректность индекса
        if (id < 0 || id >= m_data.size()) {
            std::cerr << "Wrong index" << std::endl;
            throw std::exception();
        }
        return m_data[id];
    }

    // размер базы
    size_t size() { return m_data.size(); }

private:
    // данные
    std::vector<std::shared_ptr<Student>> m_data;

};

int main() {

    // создаем БД
    DataBase db{};
    // наполняем
    db.add_student({1, "a", 12});
    db.add_student({2, "b", 22});
    db.add_student({3, "c", 32});

    Student d{4, "d", 42};
    Student e{5, "e", 52};

    db.add_student(d);
    db.add_student(e);

    // получаем студента
    auto new_d = db.get_student(3);

    std::cout << new_d->get_name() << std::endl;

    // изменяем
    new_d->set_name("Mister D");

    // студент меняется и в базе
    std::cout << db.get_student(3)->get_name() << std::endl;

}