#include <stdio.h>

int main()
{
  int num;

  printf("Enter number: ");
  scanf("%d", &num);

  int prime = 1;

  for (int i = 2 ; i < num ; i++)
  {
    if(num % i == 0)
    {
      prime = 0;
    }
  }

  if(prime == 0)
  {
    printf("Not Prime\n");
  }
  else
  {
    printf("Prime\n");
  }

  return 0;
}
