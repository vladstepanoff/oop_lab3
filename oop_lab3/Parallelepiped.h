#pragma once
#include "Rectangle.h"

class Parallelepiped :public Rectangle
{
private:
	double height;

public:
	Parallelepiped(double length, double width, double height);
	~Parallelepiped();
	double get_height();
	double volume();
	double square(int a);
	void info();
};

