//Агрегация
#include "TrangleAgre.h"
#include "Dot.h"
#include <math.h>

TrangleAgre::TrangleAgre(Dot* dot1, Dot *dot2, Dot *dot3)
{
	dot_1 = dot1;
	dot_2 = dot2;
	dot_3 = dot3;

	side_A = TrangleAgre::dot_1->distanceTo(*dot_1);
	side_B = TrangleAgre::dot_2->distanceTo(*dot_3);
	side_C = TrangleAgre::dot_3->distanceTo(*dot_1);
}

void TrangleAgre::lenSide(double& sideA, double& sideB, double& sideC)
{
	sideA = this->side_A;
	sideB = this->side_B;
	sideC = this->side_C;
}

double TrangleAgre::tranglePerimeter()
{
	return this->side_A + this->side_B + this->side_C;
}
double TrangleAgre::trangleArea()
{
	return sqrt(this->tranglePerimeter() * (this->tranglePerimeter() - this->side_A) * (this->tranglePerimeter() - this->side_B) * (this->tranglePerimeter() - this->side_C));
}

