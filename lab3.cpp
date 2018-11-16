#include "pch.h"
#include<iostream>
#include <stdio.h>
#include <math.h>
int main()
{
	int ar[5][5];
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf_s("%d", &ar[i][j]);

		}
	}
	for (k = 1; k <= 5; k++)
	{
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (ar[i][j] > ar[i + 1][j])
				{
					int x;
					x = ar[i][j];
					ar[i][j] = ar[i + 1][j];
					ar[i + 1][j] = x;
				}
			}
		}
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", ar[i][j]);

		}
		printf("\n");
	}
	int i, j, sum, g, dob = 1, r;
	double ge, gem;
	static int geom[n];

	for (r = 0, i = 0, g = 0; i < n; i++, g++, r++)
	{
		for (sum = 0, j = 0; j < n; j++)
		{
			if (r <= j)
			{
				sum = a[i][j] + sum;
			}

		}

		printf("sum r%d=%d  ", r + 1, sum);
		geom[g] = sum;



	}

	for (g = 0; g < n; g++)
	{

		dob = geom[g] * dob;

	}
	gem = fabs(dob);
	ge = pow(gem, 1.0 / 5.0);

	printf("ge=%lf", ge);
}
}

