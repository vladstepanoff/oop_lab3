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
	std::cout << "����� ���: " << get_length() << ", ������ ���: " << get_width() << ", ������: " << get_height()
		<< ", ������� �����������: " << square(5) <<  ", �����: " << volume() << std::endl;
}
