#include "Trangle.h"
#include <cmath>

Trangle::Trangle(double side)
{
	Trangle::side_A = side;
    Trangle::side_B = 0;
    Trangle::side_C = 0;
}

Trangle::Trangle(double a, double b, double c)
{
    if ((a < b + c) && (b < a + c) && (c < b + a))
    {
        Trangle::side_A = a;
        Trangle::side_B = b;
        Trangle::side_C = c;
    }
    else
    {
        throw "Это не может быть треугольником";
    }
}

double Trangle::trangleArea(int ch) 
{
    if (ch == 1)
    {
        return (pow(Trangle::side_A, 2) * sqrt(3)) / 4;
    }
    else if (ch == 2)
    {
        double p = (Trangle::side_A + Trangle::side_B + Trangle::side_C) / 2;
        return sqrt(p * (p - Trangle::side_A) * (p - Trangle::side_B) * (p - Trangle::side_C));
    }
    else
    {
        throw "Неверный выбор!";
        return 1;
    }
}