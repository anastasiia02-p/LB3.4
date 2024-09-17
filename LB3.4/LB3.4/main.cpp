// Lab_03_4.cpp
// < Прунько Анастасія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if ((x > -R && x < 0 && y>0 && y < R && (x * x + y * y >= R * R)) || (x > 0 && x < R && y<0 && y>-R && (x * x + y * y >= R * R)))
	cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
		return 0;
}