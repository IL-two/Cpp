//Практическое занятие 3. Контрольное задание №5
//Перевод числа в двоичный код
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

void binaryConversion(int num);

int main()
{
    system("chcp 1251");

    int num;

    cout << "Введите целое число для перевода в двоичную систему счисления\n";
    cin >> num;
    cout << "Результат перевода: " << endl;
    binaryConversion(num);
}

void binaryConversion(int num)
{    
    if (num > 0)
    {
        binaryConversion(num / 2);
        printf("%d", num % 2);
    }
    else printf("%d", num % 2);
}