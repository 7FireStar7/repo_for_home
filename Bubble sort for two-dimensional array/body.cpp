#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define L 2
void main()
{
	srand(time(NULL));
	int arr[N][L];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < L; j++)
		{
			arr[i][j] = rand() % 10;
		}

	}
	printf(" array: \n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < L; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j][1] > arr[j + 1][1])
			{
				for (int k = 0; k < L; k++)
				{
					int temp = arr[j][k];
					arr[j][k] = arr[j + 1][k];
					arr[j + 1][k] = temp;
				}
			}
		}
	}

	printf(" array: \n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < L; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

}