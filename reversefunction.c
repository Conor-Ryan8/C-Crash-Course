#include <stdio.h>

int reverse_int(int n)
{
  int sum, last;
  sum = 0;
  while(n > 0)
  {
    last = n % 10;
    sum = sum * 10 + last;
    n = n/10;
  }
  return sum;
}

int main()
{
  int number, solution;

  printf("Enter a number: ");
  scanf("%d", &number);

  solution = reverse_int(number);

  printf("Solution: %d", solution);
  return 0;
}
