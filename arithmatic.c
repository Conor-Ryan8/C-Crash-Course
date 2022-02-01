#include <stdio.h>

int main ()
{
  int a, b, c, d, e, f, g;

  printf("Enter the value for A: ");
  scanf("%d", &a);

  printf("Enter the value for B: ");
  scanf("%d", &b);

  c = a + b;
  printf("A + B =  %d \n", c);

  d = a - b;
  printf("A - B =  %d \n", d);

  e = a * b;
  printf("A * B =  %d \n", e);

  f = a / b;
  printf("A / B =  %d \n", f);

  g = a % b;
  printf("A % B =  %d \n", g);

  return 0;
}
