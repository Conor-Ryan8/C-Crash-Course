#include <stdio.h>

int main ()
{
  int a, b, c, avr;

  printf("Enter the value for A: ");
  scanf("%d", &a);

  printf("Enter the value for B: ");
  scanf("%d", &b);

  printf("Enter the value for C: ");
  scanf("%d", &c);

  avr = (a + b + c) / 3;
  printf("The average is %d \n", avr);

  return 0;
}
