#pragma once
#include "Dot.h"

class TrangleCompos
{
private:
	Dot dot_1;
	Dot dot_2;
	Dot dot_3;

	double side_A;
	double side_B;
	double side_C;

public:
	TrangleCompos(Dot, Dot, Dot);
	void lenSide(double&, double&, double&);
	double trangleArea();
	double tranglePerimeter();
};

