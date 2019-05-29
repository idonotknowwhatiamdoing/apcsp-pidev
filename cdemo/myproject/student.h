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
