//Практическое занятие 11. Контрольное задание №1
//Перегрузка операторов в классе Time
//От Духно Ильи гр.124/20

#include <iostream>
#include <string>
#include "Time.h"
#include "ExError.h"

using namespace std;

int main()
{
    system("chcp 1251");
    try
    {        
        Time t1, t2, t3, t4, t5;
        cin >> t1;
        cout << "T1 = " << t1;

        t2 = Time(5, 45, 15);
        cout << "T2 = " << t2;

        t3 = t1 + t2;
        cout << "T1 + T2 = " << t3;

        cin >> t4;
        t5 = t4 - t1;
        cout << "T4 - T1 = " << t5;

        if (t3 > t4)
        {
            cout << t3 << " > " << t4;
        }
        else
        {
            cout << t3 << " < " << t4;
        }
        if (t2 < t3)
        {
            cout << t2 << " < " << t3;
        }
        else
        {
            cout << t2 << " > " << t3;
        }
        if (t1 == t2)
        {
            cout << t1 << " == " << t2;
        }
        else
        {
            cout << t1 << " != " << t2;
        }
        if (t5 != t4)
        {
            cout << t5 << " != " << t4;
        }
        else
        {
            cout << t5 << " == " << t4;
        }

        t1 = t1 + 3600;
        cout << "T1 + 3600 = " << t1;
        t2 = 250 + t2;
        cout << "250 + T2 = " << t2;

    }
    catch (ExError ex)
    {
        cout << "Ошибка: ";
        ex.printError();
    }    
}

