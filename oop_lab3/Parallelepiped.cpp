#include "Parallelepiped.h"
#include <iostream>

Parallelepiped::Parallelepiped(double length, double width, double height)
{
	this->length = length;
	this->width = width;
	this->height = height;
}

Parallelepiped::~Parallelepiped()
{
}

double Parallelepiped::get_height()
{
	return height;
}

double Parallelepiped::volume()
{
	return length*width*height;
}

double Parallelepiped::square(int a)
{
	return 2*(length*width + length*height + width*height);
}

void Parallelepiped::info()
{
	std::cout << "Длина осн: " << get_length() << ", ширина осн: " << get_width() << ", высота: " << get_height()
		<< ", площадь поверхности: " << square(5) <<  ", объем: " << volume() << std::endl;
}
