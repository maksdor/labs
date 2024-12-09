#include <iostream>
#include "func.hpp"

using namespace std;

void Read(int matr[N_Max][M_Max], int& n, int& m)
{
	cout << "N, M: ";
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matr[i][j];
}

int maxInt(int matr[N_Max][M_Max], int n, int m)
{
	int MaxC = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matr[i][j] > MaxC)
				MaxC = matr[i][j];
		}
	}
	return MaxC;
}

bool isMaxNinOrderTwice(int matr[N_Max][M_Max], int n, int m)
{
	int HowManyC = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matr[i][j] == maxInt(matr, n, m))
			{
				HowManyC++;
				if (HowManyC > 1)
					return true;
			}
		}
	}
	return false;
}

bool isNonPrime(int x)
{
	if (x < 2)
		return false;
	for (int d = 2; d <= sqrt(x); d++)
		if (x % d == 0)
			return false;
	return true;
}

int HowManyNonPrime(int x)
{
	int NonPrimes = 0;

	while (x > 0)
	{
		if (isNonPrime(x % 10))
			NonPrimes++;
		x /= 10;
	}
	return NonPrimes;
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
	return;
}

void Sort(int matr[N_Max][M_Max], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int jelem = j + 1; jelem < m; jelem++)
				if (HowManyNonPrime(matr[i][j]) < HowManyNonPrime(matr[i][jelem]))
					swap(matr[i][j], matr[i][jelem]);
}

void Write(int matr[N_Max][M_Max], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matr[i][j] << " ";
		cout << endl;
	}
}

