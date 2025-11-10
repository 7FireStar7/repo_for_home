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
		printf("%d, ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("\nsorted array: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d, ", arr[i]);
	}

}