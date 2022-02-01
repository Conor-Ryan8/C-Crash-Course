#include <stdio.h>

int main()
{
  int nums[] = {2,5,1,7,9,8};
  int smallest = nums[0];

  int len = sizeof(nums)/sizeof(nums[0]);

  for (int i = 0 ; i < len ; i ++)
  {
    if (nums[i] < smallest)
    {
      smallest = nums[i];
    }
  }

  printf("Smallest value is %d", smallest);
  return 0;
}
