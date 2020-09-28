//Практическое занятие 9. Контрольное задание №2
//Класс Time
//От Духно Ильи гр.124/20

#include <iostream>
#include "Time.h"
#include "ExError.h"

using namespace std;

int main()
{
    system("chcp 1251");
    try
    {
        int hh, mm, ss;

        Time* t1 = new Time();
        t1->outTime();

        cout << "Введите часы минуты и секунды в формате hh mm ss\n";
        cin >> hh;
        cin >> mm;
        cin >> ss;

        t1 = new Time(hh, mm, ss);
        t1->outTime();

        cout << "Введите часы минуты и секунды в формате hh mm ss\n";
        cin >> hh;
        cin >> mm;
        cin >> ss;

        Time* t2 = new Time(hh, mm, ss);
        t2->outTime();

        Time* t3 = t1->add_Time(*t2);
        cout << "Результат сложения ";
        t1->outTime();
        cout << "и ";
        t2->outTime();
        t3->outTime();

        delete t1, t2, t3;
    }
    catch (ExError ex)
    {
        cout << "Ошибка: ";
        ex.printError();
    }    
}

