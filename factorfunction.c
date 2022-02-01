#include <stdio.h>

int factorize(int number)
{
  int sum = 1;

  for (int i = 1 ; i <= number ; i++)
  {
    sum *= i;
  }
  return sum;
}


int main()
{
  int number, solution;

  printf("Enter a number: ");
  scanf("%d", &number);

  solution = factorize(number);

  printf("%d", solution);

  return 0;
}
