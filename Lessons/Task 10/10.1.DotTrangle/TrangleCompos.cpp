//Композиция
#include "TrangleCompos.h"
#include <math.h>

TrangleCompos::TrangleCompos(Dot dot1, Dot dot2, Dot dot3)
{
	dot_1 = dot1;
	dot_2 = dot2;
	dot_3 = dot3;

	side_A = this->dot_1.distanceTo(dot_2);
	side_B = this->dot_2.distanceTo(dot_3);
	side_C = this->dot_3.distanceTo(dot_1);
}

void TrangleCompos::lenSide(double& sideA, double& sideB, double& sideC)
{
	sideA = this->side_A;
	sideB = this->side_B;
	sideC = this->side_C;
}

double TrangleCompos::tranglePerimeter()
{
	return this->side_A + this->side_B + this->side_C;
}
double TrangleCompos::trangleArea()
{	
	return sqrt(this->tranglePerimeter() * (this->tranglePerimeter() - this->side_A) * (this->tranglePerimeter() - this->side_B) * (this->tranglePerimeter() - this->side_C));
}
