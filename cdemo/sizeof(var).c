#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

  char c = 'b';

  // print value and size of a char variable
  printf("char c value: %d and size: %d bytes\n", c, sizeof(c));

  float j = 1.23;

  // print value and size of a float variable
  printf("float j value: %d and size: %d bytes\n", j, sizeof(j));

  double d = 123.456;

  // print value and size of a double variable
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));
}

