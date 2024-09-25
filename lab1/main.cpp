	#include <iostream>
#include <locale.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Rus");
	// Целочисленные
	char ch1 = 125, ch2 = 2;
	cout << "Тип данных: Целочисленные:" << endl;
	cout << "'char', 1 байт, -128...127" << endl;
	cout << "ch1 = " << int(ch1) << ", ch2 = " << int(ch2) << ", ch1 + ch2 = " << ch1 + ch2 << endl;
	short sh1 = 32500, sh2 = 32000;
	cout << "'short', 2 байта, -32768...32767" << endl;
	cout << "sh1 = " << sh1 << ", sh2 = " << sh2 << ", sh1 - sh2 = " << sh1 - sh2 << endl;
	int in1 = 1048576, in2 = 1;
	cout << "'int', 4 байта, -2^31...2^31-1" << endl;
	cout << "in1 = " << in1 << ", in2 = " << in2 << ", in1 * in2 = " << in1 * in2 << endl;
	long long ln1 = 1073741824, ln2 = 65536;
	cout << "'long long', 8 байта, -2^63...2^63-1" << endl;
	cout << "ln1 = " << ln1 << ", ln2 = " << ln2 << ", ln1 / ln2 = " << ln1 / ln2 << endl;
	unsigned int uin1 = 536870912, uin2 = 1073741824;
	cout << "'unsigned int', 4 байта, 0...2^32-1" << endl;
	cout << "uin1 = " << uin1 << ", uin2 = " << uin2 << ", формально, uin1 - uin2 = " << int(uin1 - uin2) << ", но unsigned int(uin1 - uin2) = " << unsigned int(uin1 - uin2) << endl;
	// Символьные
	cout << "Тип данных: Символьные:" << endl;
	cout << "'char', 1 байт, -128...127" << endl;
	char a1 = 'A', a2 = 65;
	cout << "формально, a1 = " << a1 << ", a a2 = " << int(a2) << ", но char(a1) = " << a1 << ", а char(a2) = " << a2 << endl;
	// Вещественные
	cout << "Тип данных: Вещественные:" << endl;;
	float fl1 = 10.0f, fl2 = 3.0f;
	cout << "'float', 4 байта, 6-7 цифр" << endl; 
	cout << "fl1 = " << fl1 << ", fl2 = " << fl2 << ", fl1 / fl2 = " << fl1 / fl2 << endl;
	double db1 = 10.0l, db2 = 3.0l;
	cout << "'double', 8 байтов, 15-16 цифр" << endl;	
	cout << "db1 = " << db1 << ", db2 = " << db2 << ", db1 / db2 = " << db1 / db2 << endl;
	// Логический тип
	cout << "Тип данных: Логический:" << endl;	
	int x;
	bool a = true, b = false;
	cout << "'bool', 1 байт, true/false" << endl;
	cout << "Введи 0, выдаст 1, иначе - 0: ";
	cin >> x;
	if (x == 0)
		cout << a << endl;
	else
		cout << b << endl;

	return 0;
}		

