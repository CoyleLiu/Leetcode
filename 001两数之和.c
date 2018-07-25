/*
 *给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
 *你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
 *
 *
 *示例:
 *
 *给定 nums = [2, 7, 11, 15], target = 9

 *因为 nums[0] + nums[1] = 2 + 7 = 9
  *所以返回 [0, 1]
 *
 */

int* twoSum(int* nums, int numsSize, int target) {
    int *end_value = (int*)malloc(2*sizeof(int));
    int loop1 = 0;
    int loop2 = 0;

    for(loop1 = 0; loop1 < numsSize; loop1++)
    {
        for(loop2 = loop1+1; loop2 < numsSize; loop2++)
        {
           if(target == (nums[loop1] + nums[loop2]))
           {
             end_value[0] = loop1;
             end_value[1] = loop2;
           }
        }
    }
    return end_value;
}



