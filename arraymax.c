#include <stdio.h>

int main()
{
  int nums[] = {2,5,1,7,9,8};
  int biggest = 0;

  int len = sizeof(nums)/sizeof(nums[0]);

  for (int i = 0 ; i < len ; i ++)
  {
    if (nums[i] > biggest)
    {
      biggest = nums[i];
    }
  }

  printf("Biggest value is %d", biggest);
  return 0;
}
