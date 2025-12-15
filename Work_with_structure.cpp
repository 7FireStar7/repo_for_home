#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
	char *name;
	char *group;
	float average_grade;
} person;

int main()
{
	int total_students = 0;
	float need_to_have;
	printf("Enter average grade:\n----> "); scanf_s("%f", &need_to_have); printf("\n");
	person students[6] = { { "Vanechkin", "FIsp1", 4.0 } ,{ "Egorov", "FIsp1", 4.5 },{ "Vanechkin2", "FIsp1", 3.0 } ,{  "Karelov", "FIsp1", 4.2 },{"Modnik","FIsp1",5},{"Polyakov","FIsp2",3.8} };
	printf("People with average grade more than %.1f:\n", need_to_have); printf("\n");
	printf("Name:       Group:     Average grade:\n");
	for (int i = 0; i < 5; i++)
	{
		if (students[i].average_grade > need_to_have)
		{
			printf("%-10s %6s      (average grade: %.1f)\n", students[i].name,students[i].group,students[i].average_grade);
			total_students++;
		}
	}
	printf("\ntotal count of student with average grade more than %.1f: %d", need_to_have, total_students);
	return 0;
}
