#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{

	//1

	setlocale(LC_ALL, "Rus");
	const int max = 5;
	cout << "Напиши 5 чисел:" << endl;
	float numbers[max];
	float sum = 1, min = 0;
	int i{}, p = 0;
	while (i < max)
	{
		cout << i + 1 << "-й элемент: ";
		cin >> numbers[i];
		i++;
	}
	for (i = 0; i < max; ++i)
	{
		if (numbers[i] < 0 && (floor(numbers[i]) - numbers[i]) != 0)
			sum *= numbers[i];
		else
			continue;
	}
	cout << sum << endl;
	for (i = 0; i < max; ++i)
	{
		if ((numbers[i] < 0 && (floor(numbers[i]) - numbers[i]) != 0) && (numbers[i] < min))
			min = numbers[i], p = i;
		else
			continue;
	}
	cout << min << " " << p+1 << endl;

	//2

	int n;
	cout << "n: ";
	cin >> n;
	int x{}, minx = 9, ln{};
	string str_n = to_string(n);
	while (x < str_n.length())
	{
		ln = n % 10;
		if (ln < minx)
			minx = ln;
		n /= 10;
		x++;
	}
	cout << ln;
}