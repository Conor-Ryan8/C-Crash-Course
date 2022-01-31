#include <stdio.h>

int main ()
{
  int a, b, c;

  printf("Enter the value for A: ");
  scanf("%d", &a);

  printf("Enter the value for B: ");
  scanf("%d", &b);

  c = a + b;
  printf("Value of C is: %d \n", c);

  return 0;
}
