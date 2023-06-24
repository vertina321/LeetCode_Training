/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* res;
    res = (int*) malloc(sizeof(int) * 2);
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = 0; j < numsSize; j++)
        {
            if((nums[i] + nums[j] == target) && (i != j))
            {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    return res;
}
// @lc code=end

