
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define L 100 
#define C 100
int check(columns1, lines2)
{
	if (columns1 != lines2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void main()
{
	srand(time(NULL));
	int matrix1[L][C] = { 0 }, matrix2[L][C] = { 0 }, matrix3[L][C] = { 0 };
	int lines1, lines2, columns1, columns2;
	printf("Count of lines for first matrix: "); scanf_s("%d", &lines1); printf("Count of columns for first matrix: "); scanf_s("%d", &columns1);
	printf("\nCount of lines for second matrix: "); scanf_s("%d", &lines2); printf("Count of columns for second matrix: "); scanf_s("%d", &columns2);
	if (check(columns1, lines2) == 0)
	{
		printf("Error! Check your matrix, cuz columns1 has to be equal to lines2");
		return 0;
	}

	for (int i = 0; i < lines1; i++)
	{
		for (int j = 0; j < columns1; j++)
		{
			matrix1[i][j] = rand() % 25;
		}
	}
	for (int i = 0; i < lines2; i++)
	{
		for (int j = 0; j < columns2; j++)
		{
			matrix2[i][j] = rand() % 25;
		}
	}

	printf("\nFirst matrix: \n");
	for (int i = 0; i < lines1; i++)
	{
		for (int j = 0; j < columns1; j++)
		{
			printf("%4d", matrix1[i][j]);
		}
		printf("\n");
	}

	printf("\nSecond matrix: \n");
	for (int i = 0; i < lines2; i++)
	{
		for (int j = 0; j < columns2; j++)
		{
			printf("%4d", matrix2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int count = 0;
	for (int i = 0; i < lines1; i++)
	{
		for (int j = 0; j < columns1; j++)
		{
			int temp = 0;
			for (int k = 0; k < lines2; k++)
			{
				temp = temp+ matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j] = temp;
		}
	}
	printf("\nThird matrix: \n");
	for (int i = 0; i < lines1; i++)
	{
		for (int j = 0; j < columns2; j++)
		{
			printf("%6d", matrix3[i][j]);
		}
		printf("\n");
	}
}
