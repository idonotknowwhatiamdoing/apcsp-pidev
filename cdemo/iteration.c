#include <stdio.h>

int main()
{
	int a = 0;
	int div = 10;
	while ( a < 100 )
	{
  // if statement to test is a is divisible by div
  if (a % div == 0)
  {
    printf("a is divisible by div\n");
  }
  else
  {
    printf("a is not divisible by div\n");
  }
	a++;
	}
}
