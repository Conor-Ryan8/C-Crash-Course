#include <stdio.h>

int main()
{
  int original, num, solution, last;

  printf("Enter a number: ");
  scanf("%d", &num);

  original = num;
  solution = 0;

  while(num > 0)
  {
    last = num % 10;
    solution = solution * 10 + last;
    num = num/10;
  }

  if(solution == original)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not Palindrome");
  }

  return 0;
}
