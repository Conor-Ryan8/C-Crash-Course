#include <stdio.h>

int main()
{
  int num1, num2, max;

  printf("Enter the 1st number: ");
  scanf("%d", &num1);

  printf("Enter the 2nd number: ");
  scanf("%d", &num2);

  max = num1 > num2 ? num1 : num2;

  printf("%d", max);

  return 0;
}
