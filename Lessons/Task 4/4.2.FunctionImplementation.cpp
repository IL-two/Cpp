//Практическое занятие 4. Контрольное задание №2
//Реализация функции ввода
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

bool Input(int&, int&);

int main()
{
    system("chcp 1251");

    int a, b;
    if (Input(a, b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << a <<" + " << b << " = " << s << endl;
    return 0;

}

bool Input(int &a, int &b)
{
    cout << "Введите два положительных числа" << endl;
    cin >> a >> b;
    
    return !(a > 0 && b > 0);
}