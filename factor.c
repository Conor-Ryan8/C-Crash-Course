#include <stdio.h>

int main()
{
  int sum = 1, num;

  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1 ; i <= num ; i++)
  {
    sum *= i;
  }
  printf("%d", sum);

  return 0;
}
