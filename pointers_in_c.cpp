#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void main5()
{
	int test = 20;
	int *pointer = &test;
	printf("%d", test - 5);
	printf("\n%d", *pointer);
}

void main4()
{
	int x = 10;
	double y = 3.14;
	char z = 'A';

	//объ€вление указателей
	int* pointer_x = &x;
	int* pointer_y = &y;
	int* pointer_z = &z;

	printf("x = %d, adress %p\n", x, &x);  //use %p if you want to printf adress of pointer
	printf("pointer_x = %p, unnaming: %d\n", pointer_x, *pointer_x);

	*pointer_x = 20;
	printf("After changing: x = %d\n", x); 
}//0000001F8E4FF6E4

void main3()
{
	int numbers[] = { 1,2,3,4,5,6,7 };
	int* pointer = numbers;
	for (int i = 0; i < 7; i++)
	{
		printf("pointer[%d] = %d\n", i, pointer[i]);
	}
}
 

//pointers for functions

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main2()
{
	int x = 5, y = 10;
	printf("Before swap: x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);
}


//dinamic memory allocation

void main()
{
	//for 1 element
	int* single_pointer = (int*)malloc(sizeof(int));
	if (single_pointer == NULL)
	{
		printf("Error memory allocation!\n");
		return 0;
	}
	*single_pointer = 42;
	printf("single_pointer: %d\n", *single_pointer);

	int n = 10;
	int* array_pointer = (int*)calloc(n, sizeof(int));//filled by 0
	if (array_pointer == NULL)
	{
		printf("Error memory allocation!\n");
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		array_pointer[i] = i * 10;
	}
	printf("Old massive:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%3d", array_pointer[i]);
	}

	int new_n = 25;
	int* new_array_pointer = (int*)realloc(array_pointer, new_n * sizeof(int));
	if (new_array_pointer == NULL)
	{
		return 1;
	}
	
	for (int i = n; i < new_n; i++)
	{
		new_array_pointer[i] = i * 10;
	}
	printf("\nNew massive:\n");
	for (int i = 0; i < new_n; i++)
	{
		printf("%4d", new_array_pointer[i]);
	}

	free(array_pointer);
	

}