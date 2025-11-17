#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int check(c1, l2)
{
	if (c1 != l2)
	{
		printf("\nCheck your matrix, cause multiplication is impossible!!!!!");
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
	int arr1[N] = { -1 }, arr2[N] = { -1 }, arr3[N] = { -1 };
	int lines1, columns1, lines2, columns2;
	printf("Enter count of lines for first matrix: ");
	scanf_s("%d", &lines1);
	printf("Enter count of columns for first matrix: ");
	scanf_s("%d", &columns1);
	printf("\nEnter count of lines for first matrix: ");
	scanf_s("%d", &lines2);
	printf("Enter count of columns for first matrix: ");
	scanf_s("%d", &columns2);
	if (check(columns1, lines2) == 0)
	{
		return 0;
	}
	else
	{
		printf("\nmatrixes can be multiplied\n\n");
	}

	int count = 0;
	for (int i = 0; i < lines1; i++)
	{
		for (int j = 0; j < columns1; j++)
		{
			arr1[count++] = rand() % 10;
		}
	}
	printf("First martix:\n");
	for (int i = 0; i < lines1 * columns1; i++)
	{
		while (i < columns1)
		{
			printf(" %d  ", arr1[i]);
			i++;
		}
		if (i % columns1 == 0)
		{
			printf("\n");
		}
		printf(" %d  ", arr1[i]);
	}
	printf("\n\nSecond martix:\n");
	int count1 = 0;
	for (int i = 0; i < lines2; i++)
	{
		for (int j = 0; j < columns2; j++)
		{
			arr2[count1++] = rand() % 10;
		}
	}
	for (int i = 0; i < lines2 * columns2; i++)
	{
		while (i < columns2)
		{
			printf(" %d  ", arr2[i]);
			i++;
		}
		if (i % columns2 == 0)
		{
			printf("\n");
		}
		printf(" %d  ", arr2[i]);
	}

	for (int i = 0; i < lines1; i++)
	{
		for (int j = 0; j < columns1; j++)
		{
			printf("idk what i need to do next step");
		}
	}


	


	
	
}	