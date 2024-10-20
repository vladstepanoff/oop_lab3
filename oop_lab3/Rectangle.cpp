#include "Rectangle.h"
#include <iostream>
#include <cmath>
#include <iomanip>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

Rectangle::~Rectangle()
{
}

double Rectangle::get_width()
{
	return width;
}

double Rectangle::get_length()
{
	return length;
}

double Rectangle::diagonal()
{
	return sqrt(pow(width, 2) + pow(length, 2));
}

double Rectangle::perimeter()
{
	return 2 * (width + length);
}

double Rectangle::square()
{
	return width * length;
}

void Rectangle::info()
{
	std::cout << "�����: " << get_length() << ", ������: " << get_width() << ", ���������: " << std::setprecision(3) << diagonal()
		<< ", ��������: " << perimeter() << ", �������: " << square() << std::endl;
}
