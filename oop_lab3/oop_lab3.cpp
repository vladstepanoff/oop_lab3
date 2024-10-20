// oop_lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//  26. Создать класс прямоугольник, члены класса – длины сторон a и b. 
//  Предусмотреть в классе методы вычисления и вывода сведений о фигуре – длины сторон, диагоналей, периметр, площадь.
//  Создать производный класс – параллелепипед с высотой с, добавить в класс метод определения объема фигуры,
//  перегрузить методы расчета площади и вывода сведений о фигуре. Написать программу, 
//  демонстрирующую работу с классом: дано N прямоугольников и M параллелепипедов,
//  найти количество прямоугольников, у которых площадь больше средней площади прямоугольников и количество кубов (все ребра равны).

#include <iostream>
#include <vector>
#include "Rectangle.h"
#include "Parallelepiped.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int n, m;

	cout << "Введите кол-во прямоугольников: "; cin >> n;
	cout << "Введите кол-во параллелепипедов: "; cin >> m;

	vector<Rectangle*> rects;
	vector<Parallelepiped*> parpeds;

	cout << "\nВведите данные для прямоугольников (длина и ширина через пробел)" << endl;
	for (int i = 0; i < n; i++) {
		int a, b;
		cout << i + 1 << ": ";
		cin >> a >> b;
		Rectangle* rect = new Rectangle(a, b);
		rects.push_back(rect);
	}
	cout << "\nВведите данные для параллелепипедов (длина, ширина, высота через пробел)" << endl;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cout << i + 1 << ": ";
		cin >> a >> b >> c;
		Parallelepiped* parped = new Parallelepiped(a, b, c);
		parpeds.push_back(parped);
	}

	cout << "\nПрямоугольники" << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ": ";
		rects[i]->info();
	}

	cout << "\nПараллелепипеды" << endl;
	for (int i = 0; i < m; i++) {
		cout << i + 1 << ": ";
		parpeds[i]->info();
	}

	double avg_rect_square = 0;
	for (int i = 0; i < n; i++) {
		avg_rect_square += rects[i]->square() / n;
	}
	cout << "\nСредняя площадь прямоугольников: " << avg_rect_square << endl;

	int larger_rects = 0;
	for (int i = 0; i < n; i++) {
		if (rects[i]->square() > avg_rect_square) {
			larger_rects++;
		}
	}
	cout << "Кол-во прямоугольник, с площадью больше средней: " << larger_rects << endl;

	int cubes_number = 0;
	for (int i = 0; i < m; i++) {
		if (parpeds[i]->get_length() == parpeds[i]->get_width() and parpeds[i]->get_width() == parpeds[i]->get_height()) {
			cubes_number++;
		}
	}
	cout << "Кол-во кубов: " << cubes_number << endl;

	for (int i = 0; i < rects.size(); i++) {
		delete rects[i];
	}
	for (int i = 0; i < parpeds.size(); i++) {
		delete parpeds[i];
	}

	return 0;


}
