#include "standard "
#include "student.h"

void printStudent(struct student* s)
{
	printf("firstname:%s\n", s->firstname);
	printf("lastname:%s\n", s->lastname);
	printf("age:%d\n", s->age);
	printf("studentid:%d\n", s->studentid);
	printf("\n");
}
