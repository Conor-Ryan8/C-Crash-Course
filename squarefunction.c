#include <stdio.h>

int square(int n)
{
  int square = n*n;
  return square;
}

int main()
{
  int number, solution;

  printf("Enter a number: ");
  scanf("%d", &number);

  solution = square(number);
  printf("%d", solution);

  return 0;
}
