#include "func.hpp"



int main()
{
	int n, m;
	int matr[N_Max][M_Max];

	Read(matr, n, m);

	if (isMaxNinOrderTwice(matr, n, m))
	{
		Sort(matr, n, m);
	}

	Write(matr, n, m);
}
