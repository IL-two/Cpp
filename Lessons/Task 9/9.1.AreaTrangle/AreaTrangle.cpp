//Практическое занятие 9. Контрольное задание №1
//Расчет площади треугольника
//От Духно Ильи гр.124/20

#include <iostream>
#include <cmath>
#include "Trangle.h"

using namespace std;

int main()
{
    system("chcp 1251");
    int choice;

    cout << "Выберите тип треугольника\n" 
                    << "1. Равносторонний\n"
                    << "2. Разносторонний\n" 
                    << "0. Выход\n";
    cin >> choice;
    try
    {
        switch (choice)
        {
        case 1:
        {
            double side;
            cout << "Введите длину стороны треугольника" << endl;
            cin >> side;
            Trangle* tr = new Trangle(side);
            cout << "Площадь равностороннего треугольника: " << tr->trangleArea(choice) << endl;
            break;
        }
        case 2:
        {
            double a, b, c;
            cout << "Введите длину сторон треугольника a, b, c" << endl;
            cin >> a >> b >> c;
            Trangle* tr = new Trangle(a, b, c);
            cout << "Площадь разностороннего треугольника: " << tr->trangleArea(choice) << endl;
            break;

        }
        case 0:
        {
            cout << "До свидания!" << endl;
            break;
        }
        default:
        {
            cout << "Введен неверный символ" << endl;
            break;
        }
        }
    }
    catch (const char *message)
    {
        cout << "Ошибка: " << message << endl;
    }    
}