#include <stdlib.h>
#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *ans = malloc(*returnSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize = 2;
    int *ans = twoSum(nums, numsSize, target, &returnSize);
    printf("[%d,%d]", ans[0], ans[1]);
    return 0;
}