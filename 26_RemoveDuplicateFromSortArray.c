/*
26. Remove Duplicates from Sorted Array
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
Example 2:

Given nums = [0,0,1,1,1,2,2,3,3,4],

Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

It doesn't matter what values are set beyond the returned length.
Clarification:


题目：从一个已排好序的数组中移除重复的元素，并返回新数组的长度length，数组的前length的元素构成新的数组
分析：遍历整个数组，依次比较相邻的元素，当后一个元素比前一个元素大时，新数组的长度加1，并将后一个元素的值赋与新数组的最后一个元素。
*/


int removeDuplicates(int* nums, int numsSize){
    if(nums == NULL || numsSize < 2)
    {
        return numsSize;
    }
    
    int len = 0, i = 1;
    while( i < numsSize && len < numsSize)
    {
        if(nums[i] > nums[len])
        {
            len++;
            nums[len] = nums[i];
        }
        i++;
    }
    
    return len + 1;
}
