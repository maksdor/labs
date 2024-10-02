#include <iostream>
#include <locale.h>

using namespace std;

int summa(int a)
{
	int s{};
	while (a > 0)
	{
		s += a % 10;
		a /= 10;
	}
	return s;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "¬веди 5 чисел: ";
	const int n = 5;
	long long numbers[n];
	int  i{}, sum{}, j{};
	while (i < n)
	{
		cin >> numbers[i];
		i++;
	}
	for (i = 0; i < n; i++)
	{
		int x = numbers[i];
		while (x > 0)
		{
			sum += x % 10;
			x /= 10;
		}
		if (sum == 19)
			break;
		else
			sum = 0;
	}
	if (sum == 19)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (numbers[i] < numbers[j])
				{
					int t = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = t;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
		std::cout << numbers[i] << '\t';
	std::cout << std::endl;

	// 2

	cout << "¬веди 7 чисел: ";
	const int n1 = 7;
	long long numbers1[n1];
	int  i1{}, j1{};
	while (i1 < n1)
	{
		cin >> numbers1[i1];
		i1++;
	}

	for (i1 = 0; i1 < n1; i1++)
	{
		for (j1 = i1; j1 < n1; j1++)
		{
			if (numbers1[i1] > numbers1[j1])
			{
				int t1 = numbers1[i1];
				numbers1[i1] = numbers1[j1];
				numbers1[j1] = t1;
			}
		}
	}
	for (int i = 0; i < n1; i++)
		std::cout << numbers1[i] << '\t';
	std::cout << std::endl;


}