#include "pch.h"
#include<iostream>
#include <stdio.h>
#include <math.h>
#define MATRIX_SIZE 5


void Vvid(int ar[MATRIX_SIZE][MATRIX_SIZE]) {
	int ar[MATRIX_SIZE][MATRIX_SIZE];
	int i, j, k;
	for (i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			scanf("%d", &ar[i][j]);

		}
	}
}

void SortByVstavkaByGrowthByColumns(int ar[MATRIX_SIZE][MATRIX_SIZE]) {
	int i, j,k;
	for (k = 1; k <= MATRIX_SIZE; k++)
	{
		for (i = 0; i < MATRIX_SIZE - 1; i++)
		{
			for (j = 0; j < MATRIX_SIZE; j++)
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
}

void SumOfElementsOfRowBelowMainDiagonal(int ar[MATRIX_SIZE][MATRIX_SIZE]) {
	int  sum;


	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			sum += ar[i][j];
		}
	}
	printf(" %d\t ", sum);
	int arif;
	arif = sum / (5 * 5); //середнє арифметичне
}


void Vyvid(int ar[MATRIX_SIZE][MATRIX_SIZE]) {
	int i, j;
	for (i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			printf("%d\t", ar[i][j]);

		}
		printf("\n");
	}
}

int main()
{
	int ar[MATRIX_SIZE][MATRIX_SIZE];
	Vvid(ar);
	SortByVstavkaByGrowthByColumns(ar);
	Vyvid(ar);
	SumOfElementsOfRowBelowMainDiagonal(ar);
}