#include <stdio.h>

int main()
{
  int num;

  printf("Enter a number to test.... ");
  scanf("%d", &num);

  switch(num % 2)
  {
    case 0:
      printf("even");
      break;

    default:
      printf("odd");
  }
  return 0;
}
