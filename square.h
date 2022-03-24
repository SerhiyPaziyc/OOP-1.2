#pragma once
class square
{
private:
	int x1, x2, y1, y2;
public:
	double A;
	double Pl;
	double Pr;

	double getX1() const { return x1; }
	double getX2() const { return x2; }
	double getY1() const { return y1; }
	double getY2() const { return y2; }
	bool setX1(double);
	bool setX2(double);
	bool setY1(double);
	bool setY2(double);

	void side();
	void perimeter();
	void area();


	bool Init(double x1, double x2, double y1, double y2);
	void Read();
	void Display() const;
};

