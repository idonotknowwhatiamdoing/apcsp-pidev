#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

  char b = 'c';

  // print value and size of an char variable
  printf("char b value: %c and size: %c bytes\n", b, sizeof(b));

  float j = 1.23;

  // print value and size of an float variable
  printf("float j value: %f and size: %f bytes\n", j, sizeof(j));  

  double d = 12.345;

  // print value and size of an double variable
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));

  unsigned v = 7;

  // print value and size of an int variable
  printf("unsigned v value: %d and size: %d bytes\n", v, sizeof(v));

  long x = 8;

  // print value and size of an int variable
  printf("long x value: %d and size: %d bytes\n", x, sizeof(x));
}

