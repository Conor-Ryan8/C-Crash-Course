#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  for (int i = 1 ; i <= num ; i++)
  {
    for (int s = 1 ; s <= i ; s++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
