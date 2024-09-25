#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	cout << "Объем прямоугольного параллелепипеда: ";
	cout << a * b * c;

}