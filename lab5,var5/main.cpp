#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

	//1

	setlocale(LC_ALL, "Rus");
	const int max = 5;
	cout << "������ 5 �����:" << endl;
	float numbers[max];
	float sum = 1;
	int i{};
	while (i < max)
	{
		cout << i + 1 << "-� �������: ";
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

	//2

	long long n;
	cout << "n: ";

}