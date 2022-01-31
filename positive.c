#include <stdio.h>

int main()
{
  int num;

  while(1)
  {
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num > 0)
    {
      break;
    }
  }
  return 0;
}
