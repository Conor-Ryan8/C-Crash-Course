#include <stdio.h>

int is_palindrome(int n)
{
  int original, count, last;

  original = n;
  count = 0;

  while(n > 0)
  {
    last = n % 10;
    count = count * 10 + last;
    n = n/10;
  }

  if(count == original)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


int main()
{
  int number, solution;

  printf("Enter a number: ");
  scanf("%d", &number);

  solution = is_palindrome(number);
  printf("%d", solution);
  return 0;
}
