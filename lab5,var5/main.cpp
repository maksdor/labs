#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{

	//1

	setlocale(LC_ALL, "Rus");
	const int max = 5;
	cout << "������ 5 �����:" << endl;
	float numbers[max];
	float sum = 1, min = 0;
	int i{}, p = 0;
	while (i < max)
	{
		cout << i + 1 << "-� �������: ";
		cin >> numbers[i];
		i++;
	}
	for (i = 0; i < max; ++i)
	{
		if (numbers[i] < 0 && (floor(numbers[i]) - numbers[i]) != 0)
		{
			sum *= numbers[i];
			if (numbers[i] < min)
				min = numbers[i];
				p = i;
		}
	}
	if (min != 0 && sum != 1)
	{
		cout << "������������: " << sum << endl;
		cout << "�������: " << min << " ��� �������: " << p + 1 << endl;
	}
	else
		cout << "���������� ����� ���������� ��� �������" << endl;

	//2

	int n;
	cout << "n: ";
	cin >> n;
	int minx = 9, ln{};
	while (n > 0)
	{
		ln = n % 10;
		if (ln < minx)
			minx = ln;
		n /= 10;
	}
	cout << minx;
}