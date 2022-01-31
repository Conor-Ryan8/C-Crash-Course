#include <stdio.h>

int main()
{
  int obtMarks, totMarks;

  float percent;

  printf("Enter Obtained Marks: ");
  scanf("%d", &obtMarks);

  printf("Enter Total Marks: ");
  scanf("%d", &totMarks);

  percent = obtMarks * 100.0 / totMarks;
  printf("Percentage: %f", percent);

  return 0;
}
