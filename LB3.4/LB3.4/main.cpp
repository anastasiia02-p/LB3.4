// Lab_03_4.cpp
// < ������� �������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	
		double R; // ������� ��������
	double y; // ��������� ���������� ������
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