#include <stdio.h>

int is_prime(int n)
{
  int prime = 1;

  for (int i = 2 ; i < n ; i++)
  {
    if(n % i == 0)
    {
      prime = 0;
    }
  }
  return prime;
}

int main()
{
  int number, solution;

  printf("Enter number: ");
  scanf("%d", &number);

  solution = is_prime(number);
  printf("%d", solution);

  return 0;
}
