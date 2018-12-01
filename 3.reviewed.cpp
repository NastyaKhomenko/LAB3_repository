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
			scanf("%d", &ar[i][j]);

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
	int  sum;


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum += ar[i][j];
		}
	}
	printf(" %d\t ", sum);
	int arif;
	arif = sum / (5 * 5); //середнє арифметичне
}

	
