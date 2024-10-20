#pragma once

class Rectangle
{
protected:
	double length;
	double width;

public:
	Rectangle();
	Rectangle(double length, double width);
	~Rectangle();
	double get_width();
	double get_length();
	double diagonal();
	double perimeter();
	double square();
	void info();
};

