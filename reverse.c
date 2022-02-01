#include <stdio.h>

int main()
{
  int num, solution, last;

  printf("Enter a number: ");
  scanf("%d", &num);

  solution = 0;
  while(num > 0)
  {
    printf("%d %d %d\n", num, solution, last);
    last = num % 10;
    solution = solution * 10 + last;
    num = num/10;
  }
  printf("Solution: %d", solution);
  return 0;
}
