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

int firstDigit(int b)
{
	int c{};
		while (b > 0)
		{
			c = b % 10;
			b /= 10;
		}
		return c;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	/// 1 ///
		
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
		for (i = 0; i < n-1; i++)
		{
			for (j = i+1; j < n; j++)
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
		cout << numbers[i] << '\t';
	cout << endl;

	/// 2 /// 

	cout << "¬веди 5 чисел: ";
	int mass[n], mass_sum[n];
	int  i1{}, sum1{}, j1{};
	while (i1 < n)
	{
		cin >> mass[i1];
		i1++;
	}

	i1 = 0;
	while (i1 < n)
	{
		mass_sum[i] = summa(mass[i]);
	}

	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (mass_sum[i] > mass_sum[j])
			{
				int t = mass[i];
				mass[i] = mass[j];
				mass[j] = t;
			}
			else if (mass_sum[i] == mass_sum[j])
			{
				if (firstDigit(i) > firstDigit(j))
				{
					int t = mass[i];
					mass[i] = mass[j];
					mass[j] = t;
				}
				else if (firstDigit(i) == firstDigit(j))
				{
					if (mass[i] > mass[j])
					{
						int t = mass[i];
						mass[i] = mass[j];
						mass[j] = t;
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << mass[i] << '\t';
	cout << endl;

	/// 3 ///
	cout << "¬веди 9 чисел: ";
	const int N = 3, M = 3;
	int A[N][M], summax{}, curi{};
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			cin >> A[i][j];

	for (i = 0; i < N; i++)
	{
		int sumcur = 0;
		for (j = 0; j < M; j++)
			sumcur += abs(A[i][j]);
		if (sumcur > summax)
		{
			summax = sumcur;
			curi = i;
		}
	}
	
	for (j = 0; j < M; j++)
			{
		A[curi][j] = 9999;
			}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++) 
			cout << A[i][j] << " ";
		cout << endl;
		}

	/// 4 ///

	cout << "¬веди размерность посл-ти: ";
	const int n2_max = 20000;
	int n2;
	cin >> n2;
	int posled[n2_max];
	int  i2{}, j2{};
	cout << "¬веди 5 чисел: ";
	while (i2 < n2)
	{
		cin >> posled[i2];
		i2++;
	}

	// удал€ем 

	for (i2 = 0; i2 < n2; i2++)
	{ 
		if (firstDigit(posled[i2]) == (posled[i2]) % 10)
			continue;
		posled[j2] = posled[i2];
		j2++;
	}
	n2 = j2;

	// дублируем

	for (i2 = 0; i2 < n2; i2++)
	{
		if (firstDigit(posled[i2]) == 3)
		{
			for (j2 = n2;j2 > i2;j2--)
			{
				posled[j2] = posled[j2 - 1];
			}
			i2++;
			n2++;
		}
	}
	for (int i2 = 0; i2 < n2; i2++)
		cout << posled[i2] << '\t';
	cout << endl;

	return 0;
}