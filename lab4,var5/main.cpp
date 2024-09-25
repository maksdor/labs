#include <iostream>

using namespace std;

int main()
{
	// 1

	int a, b, c;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	if (a < b && b < c)
		cout << c - b - a << endl;
	else
		if (a % c == 0)
			cout << a / c + b << endl;
		else
			cout << a + b + c << endl;

	// 2

	int n;
	do {
	cout << "N (0 to exit): ";
	cin >> n;
		switch (n)
		{
		case 1151:
			cout << "Tovar s kodom 1151 exists" << endl;
			break;
		case 1125:
			cout << "Tovar s kodom 1125 exists" << endl;
			break;
		case 3047:
			cout << "Tovar s kodom 3047 exists" << endl;
			break;
		case 4056:
			cout << "Tovar s kodom 4056 exists" << endl;
			break;
		case 9117:
			cout << "Tovar s kodom 9117 exists" << endl;
			break;
		case 0:
			break;
		default:
			cout << "OSHIBKA, tovara s kodom " << n << " ne naideno!" << endl;
			break; 
		}
	} while (n != 0);

	// 3.1

	int x;
	cout << "x: ";
	cin >> x;
	if (x == 1 | x == -1)
		if (x == 1)
			cout << "Positive number" << endl;
		else
			cout << "Negative number" << endl;

	// 3.2

	int x1;
	cout << "x: ";
	cin >> x1;
	switch (x1)
	{
		case 1:
			cout << "Positive number" << endl;
			break;
		case -1:
			cout << "Negative number" << endl;
			break;
		default:
			break;
	}
}