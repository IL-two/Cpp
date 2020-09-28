//Практическое занятие 3. Контрольное задание №1
//Программа расчета сложной фигуры
//От Духно Ильи гр.124/20

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;
 
double trangleSide(double x1, double y1, double x2, double y2);
double trangleArea(double a, double c, double b);
double polygonArea(double trangle1, double trangle2, double trangle3);

int main()
{
    system("chcp 1251");

    double arrayPolygon[5][2];
    double polygonAreaResult;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                cout << "Введите координаты по X для " << i + 1 << " стороны многоугольника" << endl;
                cin >> arrayPolygon[i][j];
            }
            else
            {
                cout << "Введите координаты по Y для " << i + 1 << " стороны многоугольника" << endl;
                cin >> arrayPolygon[i][j];
            }            
        }        
    }

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Многоугольник и его стороны:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                cout << i + 1 << " сторонa многоугольника по X [ " << arrayPolygon[i][j] << " ] (" << i << " " << j << ")";
            }
            else
            {
                cout << " сторонa многоугольника по Y [ " << arrayPolygon[i][j] << " ] (" << i << " " << j << ")" << endl;
            }
        }
    }
    //Расчет площади многоугольника
    polygonAreaResult = polygonArea(
        trangleArea(
            trangleSide(arrayPolygon[0][0], arrayPolygon[0][1], arrayPolygon[1][0], arrayPolygon[1][1]),
            trangleSide(arrayPolygon[1][0], arrayPolygon[1][1], arrayPolygon[2][0], arrayPolygon[2][1]),
            trangleSide(arrayPolygon[0][0], arrayPolygon[0][1], arrayPolygon[2][0], arrayPolygon[2][1])),
        trangleArea(
            trangleSide(arrayPolygon[0][0], arrayPolygon[0][1], arrayPolygon[2][0], arrayPolygon[2][1]),
            trangleSide(arrayPolygon[2][0], arrayPolygon[2][1], arrayPolygon[3][0], arrayPolygon[3][1]),
            trangleSide(arrayPolygon[0][0], arrayPolygon[0][1], arrayPolygon[3][0], arrayPolygon[3][1])),
        trangleArea(
            trangleSide(arrayPolygon[3][0], arrayPolygon[3][1], arrayPolygon[4][0], arrayPolygon[4][1]),
            trangleSide(arrayPolygon[0][0], arrayPolygon[0][1], arrayPolygon[3][0], arrayPolygon[3][1]),
            trangleSide(arrayPolygon[4][0], arrayPolygon[4][1], arrayPolygon[0][0], arrayPolygon[0][1])));

    cout << "Площадь заданного многоугольника: " << polygonAreaResult << endl;
}

//Расчет одной стороны
double trangleSide(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

//Расчет площади треугольника
double trangleArea(double a, double c, double b)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

//Расчет площади многоугольника
double polygonArea(double trangle1, double trangle2, double trangle3)
{
    return trangle1 + trangle2 + trangle3;
}