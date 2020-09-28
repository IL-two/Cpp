//Практическое занятие 3. Контрольное задание №2
//Применение итерации реализации функции
//От Духно Ильи гр.124/20

#include <iostream>
#include <cmath>

using namespace std;

double powNew(double a);

int main()
{
    system("chcp 1251");
    
    double chislo;

    cout << "Введите число, что бы вычеслить кубеческий корень: ";
    cin >> chislo;

    cout << "Кубический корень стандартной ф-ции равен " << pow(chislo, 1.0 / 3) << endl;
    cout << "Кубический корень не стандартной ф-ции равен " << powNew(chislo) << endl;
}

double powNew(double a)
{
    double x = a, xOld = 0;

    do
    {
        xOld = x;
        x = 0.33333333333 * ((a / (xOld * xOld)) + (2 * xOld));
        //cout << x << " " << xOld << endl;
    } while (x != xOld );

    return x;
}