//Практическое занятие 3. Контрольное задание №3
//Расчет площади треугольника
//От Духно Ильи гр.124/20

#include <iostream>
#include <cmath>

using namespace std;

double triangle(double side);
double triangle(double a, double b, double c);

int main()
{
    system("chcp 1251");
    int choice;

    cout << "Выберите тип треугольника\n" 
                    << "1. Равносторонний\n"
                    << "2. Разносторонний\n" 
                    << "0. Выход\n";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
    {
        double side;
        cout << "Введите длину стороны треугольника" << endl;
        cin >> side;
        cout << "Площадь равностороннего треугольника: " << triangle(side) << endl;
        break;
    }
    case 2:
    {
        double a, b, c;
        cout << "Введите длину сторон треугольника a, b, c" << endl;
        cin >> a >> b >> c;
        if ((a < b + c) && (b < a + c) && (c < b + a))
        {
            cout << "Площадь разностороннего треугольника: " << triangle(a, b, c) << endl;
            break;
        }
        else
        {
            cout << "Это не может быть треугольником" << endl;
        }
        
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

double triangle(double side)  //Равносторонний треугольник
{
    return (pow(side, 2) * sqrt(3)) / 4;
}

double triangle(double a, double b, double c) //Разносторонний треугольник
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}