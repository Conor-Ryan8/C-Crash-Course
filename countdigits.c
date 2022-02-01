#include <stdio.h>

int count_digits(int n)
{
  int count = 0;
  while(n != 0)
  {
    count++;
    n = n / 10;
  }
  return count;
}

int main()
{
  int number, solution;

  printf("Enter a number: ");
  scanf("%d", &number);

  solution = count_digits(number);

  printf("Solution: %d", solution);
  return 0;
}
