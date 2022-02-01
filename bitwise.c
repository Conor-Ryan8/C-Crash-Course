#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  int mask = 1;

  if (number & mask)
  {
    printf("Odd number");
  }
  else
  {
    printf("Even number");
  }
}
