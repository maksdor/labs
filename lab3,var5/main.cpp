#include <iostream>

using namespace std;

int main()
{
	unsigned int i, x;
	cout << "x: ";
	cin >> x;
	cout << "i: ";
	cin >> i;
	cout << (x & ~(1 << i)) << endl;
}