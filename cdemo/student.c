#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student
{
	char firstname[50];
	char lastname[50];
	int age;
	int studentid;
};

void printStudent(struct student* s)
{
	printf("firstname:%s\n", s->firstname);
	printf("lastname:%s\n", s->lastname);
	printf("age:%d\n", s->age);
	printf("studentid:%d\n", s->studentid);
	printf("\n");
}

int main()
{
	struct student record[100];
	char firstname[50];
	char lastname[50];
	int age;
	int studentid;

	char input[256];
	printf("Enter student info (one line per entry): first_name last_name age student_id\n");
	int i =0; 

	while (1)
	{
		fgets(input, 256, stdin);
		if (sscanf(input, "%s %s %d %d", firstname, lastname, &age, &studentid) != 4) break;
		strcpy(record[i].firstname, firstname);
		strcpy(record[i].lastname, lastname);
		record[i].age=age;
		record[i].studentid=studentid;
		i = i+1;

	}
	int j;
	for (j=0; j<i; j++)
	{
		printStudent(&record[j]);
	}
}
 
