//Практическое занятие 2. Контрольное задание №2
//Программа определения максимального числа
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");

    int number1, number2, number3;

    cout << "Введите три числа:\n";
    cin >> number1 >> number2 >> number3;

    if (number1 > number2 && number1 > number3) 
        cout << "Наибольшее число " << number1;
    else if (number2 > number3)
        cout << "Наибольшее число " << number2;
    else
        cout << "Наибольшее число " << number3;
}