#include <stdio.h>

int main()
{
  int nums[5] = {1,2,3,4,5};
  int target = 2;

  int size = sizeof(nums)/sizeof(nums[0]);

  for (int i = 0 ; i < size ; i++)
  {
    if (target == nums[i])
    {
      printf("Target %d at index [%d]", target, i);
    }
  }
  return 0;
}
