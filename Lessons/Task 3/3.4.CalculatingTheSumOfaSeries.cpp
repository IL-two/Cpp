//Практическое занятие 3. Контрольное задание №4
//Вычисление суммы ряда
//От Духно Ильи гр.124/20

#include <iostream>
#include <cmath>

using namespace std;

int sumSires(int num);

int main()
{
    system("chcp 1251");

    int num;

    cout << "Введите число: ";
    cin >> num;

    if (num > 0)
    {
       cout << "Сумма чисел ряда " << sumSires(num) << endl;
    }
    else
    {
        cout << "Укажите пожалуйста положительное число" << endl;
    }
}

int sumSires(int num)
{
    if (num == 1) return 5;
    else return num * 5 + (sumSires(num - 1));
}