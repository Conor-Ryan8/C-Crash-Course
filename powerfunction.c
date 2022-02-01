#include <stdio.h>

int powers(int number, int power)
{
  int solution = number;

  for (int i = 1 ; i < power ; i++)
  {
    solution = solution * power;
  }
  return solution;
}


int main()
{
  int number, power, solution;

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("Enter a power: ");
  scanf("%d", &power);

  solution = powers(number, power);

  printf("%d", solution);

  return 0;
}
