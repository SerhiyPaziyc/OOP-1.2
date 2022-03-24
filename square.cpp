#include "square.h"
#include <iostream>
using namespace std;
bool square::setX1(double value)
{
	x1 = value;
}

bool square::setX2(double value)
{
	x2 = value;	
}

bool square::setY1(double value)
{	
	y1 = value;
}

bool square::setY2(double value)
{  
	y2 = value;
}

void square::side()
{
	double C;
	C = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	A = C * sqrt(2) / 2;
	
}

void square::area()
{
	Pl = (sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))) * sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
}

void square::perimeter()
{
	Pr = ((sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)))) + (sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))))) / 2;
}

bool square::Init(double x1, double x2, double y1, double y2)
{
	return setX1(x1) && setX2(x2) && setY1(y1) && setY2(y2);
}
void square::Read()
{
	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "y1 = ";
	cin >> y1;
	cout << "y2 = ";
	cin >> y2;
}
void square::Display() const
{
	if (x1 == x2 == y1 == y2) {


		cout << "error" << endl;
	}
	else
	{
		cout << " Side = " << A << endl;
		cout << " Area = " << Pl << endl;
		cout << " Perimeter = " << Pr << endl;
	}
}
