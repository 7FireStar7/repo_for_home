#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
void main()
{
	srand(time(NULL));
	int count_of_elements1, count_of_elements2;
	int visible_first_array_choise, save_first_array_element_choise;
	printf("Input count of elements in massive: "); scanf_s("%d", &count_of_elements1);
	int* first_array = (int*)calloc(count_of_elements1, sizeof(int));
	if (first_array == NULL)
	{
		printf("error memory allocation!\n");
		return 0;
	}
	for (int i = 0; i < count_of_elements1; i++)
	{
		first_array[i] = rand() % 25;
	}
	printf("do you wanna see elements of first massive?:\n1.yes\n2.no\n----> "); scanf_s("%d", &visible_first_array_choise); printf("\n");
	switch (visible_first_array_choise)
	{
	case 1:
	{
		for (int i = 0; i < count_of_elements1; i++)
		{
			printf("%4d", first_array[i]);
		}
		break;
	}
	case 2: printf("alr.\n");
	default: break;
	}
	printf("\n\nInput count of elements in massive 2: "); scanf_s("%d", &count_of_elements2);
	int* second_array = (int*)realloc(first_array, count_of_elements2 * sizeof(int));
	if (second_array == NULL)
	{
		printf("error memory allocation!\n");
		return 0;
	}
	printf("\ndo you wanna save elements of first array?:\n1.yes\n2.no\n----> "); scanf_s("%d", &save_first_array_element_choise); printf("\n");
	switch (save_first_array_element_choise)
	{
	case 1:
	{
		if (count_of_elements2 <= count_of_elements1)
		{
			for (int i = 0; i < count_of_elements2; i++)
			{
				printf("%4d", second_array[i]);
			}
		}
		else
		{
			for (int i = count_of_elements1; i < count_of_elements2; i++)
			{
				second_array[i] = rand() % 25;
			}
			for (int i = 0; i < count_of_elements2; i++)
			{
				printf("%4d", second_array[i]);
			}
		}
		break;
	}
	case 2:
	{
		for (int i = 0; i < count_of_elements2; i++)
		{
			second_array[i] = rand() % 25;
		}
		for (int i = 0; i < count_of_elements2; i++)
		{
			printf("%4d", second_array[i]);
		}
		break;
	}
	default:break;
	}
}