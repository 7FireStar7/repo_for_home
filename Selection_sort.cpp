#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 25
void main()
{
	srand(time(NULL));
	int arr[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 26;
	}
	printf("array: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}


	for (int i = 0; i < N - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
	printf("\nsorted array: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}

}