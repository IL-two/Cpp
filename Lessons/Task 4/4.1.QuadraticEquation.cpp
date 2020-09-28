//Практическое занятие 4. Контрольное задание №1
//Программа вычислениея корней квадратного уравнения
//От Духно Ильи гр.124/20

#include <iostream>
#include <cmath>

using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
    system("chcp 1251");
    double a, b, c, x1, x2;
    int result;

    cout << "Введите значение a, b и с для вычисления квадратного уравнения:\n";
    cin >> a >> b >> c;

    result = Myroot(a, b, c, x1, x2);

    switch (result)
    {
    case 1:
    {
        cout << "Квадратное уравнение имеет два корня\n" << "x1 = " << x1 << "\nx2 = " << x2 << endl;
        break;
    }
    case 0:
    {
        cout << "Квадратное уравнение имеет один корень\n" << "x = " << x1 << endl;
        break;
    }
    case -1:
    {
        cout << "Квадратное уравнение не имиеет корней" << endl;
        break;
    }
        
    }
}

int Myroot(double a, double b, double c, double &x1, double &x2)
{
    double D = pow(b, 2) - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b - sqrt(D)) / (2 * a);
        x2 = (-b + sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
        return 0;
    }
    else
    {
        return -1;
    }
}