// Lab_03_4.cpp
// < Шкринда Володимир
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 22
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + 5 < 0 && c == 0)
			F = (1 / (a * x)) - b;
		else
			if (x + 5 > 0 && c != 0)
				F = (x - a) / x;
			else
				F = (10 * x) / (c - 4);
		cout << "|" << setw(7) << setprecision(2) << F

			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	x = xp;
	do {
		if (x + 5 < 0 && c == 0)
			F = (1 / (a * x)) - b;
		else
			if (x + 5 > 0 && c != 0)
				F = (x - a) / x;
			else
				F = (10 * x) / (c - 4);
		cout << "|" << setw(7) << setprecision(2) << F

			<< " |" << endl;
		x += dx;
	} while (x <= xk);
	cout << "---------------------------" << endl;
	for (x = xp; x <= xk; x += dx)
	{
		if (x + 5 < 0 && c == 0)
			F = (1 / (a * x)) - b;
		else
			if (x + 5 > 0 && c != 0)
				F = (x - a) / x;
			else
				F = (10 * x) / (c - 4);
		cout << "|" << setw(7) << setprecision(2) << F

			<< " |" << endl;
	
	}
	return 0;
	cin.get();
}
