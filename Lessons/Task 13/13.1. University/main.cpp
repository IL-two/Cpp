//Практическое занятие 13. Контрольное задание №1
//Полиморфизм в системе классов учебного центра
//От Духно Ильи гр.124/20

#include <iostream>
#include <vector>
#include "human.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
    system("chcp 1251");
    // Оценки студента
    std::vector<int> scores;
    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    Student* stud = new Student("Петров", "Иван", "Алексеевич", scores);
    std::cout << stud->get_full_name() << std::endl;

    unsigned int teacher_work_time = 40;
    Teacher* tch = new Teacher("Сергеев", "Дмитрий", "Сергеевич",
        teacher_work_time);
    std::cout << tch->get_full_name() << std::endl;

    std::vector<int> scores2;
    scores2.push_back(1);
    scores2.push_back(2);
    scores2.push_back(4);
    scores2.push_back(4);
    scores2.push_back(3);
    scores2.push_back(3);
    scores2.push_back(4);
    scores2.push_back(3);
    scores2.push_back(4);

    human* h1 = new Student("Духно", "Илья", "Михайлович", scores2);
    std::cout << h1->get_full_name() << std::endl;

    teacher_work_time = 80;
    human* h2 = new Teacher("Иванов", "Петр", "Дмитриевич", teacher_work_time);
    std::cout << h2->get_full_name() << std::endl;

    return 0;
}