#include <stdlib.h>
#include <stdio.h>

 
float areaOfCircle(float radius)
{
float area = (3.14 * radius * radius);
return area;
}

 
int main(int argc, char* argv[])
{

	char input [100];
	float lower;
	float upper;

	if (argc != 3)
	{
		printf("input lower and upper bounds\n");
		while (1)
		{
			fgets(input, 100, stdin);
			if (sscanf(input, "%f %f", &lower, &upper) == 2) break;
			printf("Not a valid input - try again!\n");
		}
	}
	else
	{
		lower = atof(argv[1]);
		upper = atof(argv[2]); 
	}

	for (float radius = lower; radius <= upper; radius++)
	{
		float result = areaOfCircle(radius);
		printf("Area of r =%f: %f\n", radius, result);
	}
}
