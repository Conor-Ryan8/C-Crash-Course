#include <stdio.h>

int main()
{
  int nums[3][2] = {{1,2},{3,4},{5,6}};
  int length = sizeof(nums)/sizeof(nums[0]);
  int width = sizeof(nums[0])/sizeof(nums[0][0]);

  for (int x = 0 ; x < length ; x++)
  {
    for (int y = 0 ; y < width ; y++)
    {
      printf("%d, ", nums[x][y]);
    }
  }
  return 0;
}
