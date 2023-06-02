/*******************************************************************
 * Files:  conditionExpression.c
 * Author: Rozell Dixon
 * Date:   June 2023
 * 
 * Problem Description:   Given an integer array nums, find the 
 *                        subarray with the largest sum, and
 *                        return its sum.
 * 
 * Purpose: Demonstrate the use of a conditional expression.
 *          expr1 ? expr2 : expr3
*/

#include <stdio.h>

int maxSubArray(int* nums, int numsSize){
    int res = nums[0], subarray = 0,i;
    for(i=0; i < numsSize; i++){
        subarray = (subarray < 1 ? nums[i] : subarray + nums[i]);
        res = (res > subarray ? res : subarray);
    }
    return res;
}

int main(void){
    int res;
    int nums1[9] = {-2,1,-3,4,-1,2,1,-5,4};
    res = maxSubArray(nums1,9);
    printf("Output: %d\n",res);

    int nums2[1] = {1};
    res = maxSubArray(nums2,1);
    printf("Output: %d\n",res);

    int nums3[5] = {5,4,-1,7,8};
    res = maxSubArray(nums3,5);
    printf("Output: %d\n",res);

    return 0;
}
