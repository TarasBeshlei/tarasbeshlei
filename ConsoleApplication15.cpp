#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{

	double x, h = 0.05, d = 0.001, sum, k = 1, SUM;

	for (x = 0.5; x <= 0.7; x += h)
	{
		sum = 0; SUM = 0; k = 1;
		do
		{
          sum = (x + 2)/k(k + 2);
			SUM += sum;
			k++;

		} while (fabs(sum) >= d);
		cout << "\nSUM = " << SUM << " x = " << x << " sum = " << sum << endl;
	}

	_getch();
	return 0;

	}
