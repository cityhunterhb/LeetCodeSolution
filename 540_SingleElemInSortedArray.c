/***************************************************
*      FileName: 540_SinglseElemInSortedArray.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-19 07:36:25
*      LastModified: 2019-05-19 07:41:42
****************************************************/


/*
 540. Single Element in a Sorted Array
 Given a sorted array consisting of only integers where every element appears exactly twice except for one element which appears exactly once. Find this single element that appears only once.

 Example 1:
Input: [1,1,2,3,3,4,4,8,8]
Output: 2

Example 2:
Input: [3,3,7,7,10,11,11]
Output: 10

分析：在一个排好序的数组中，除了一个整数只出现1次外，其他整数都出现了2次，找出这个整数，要求时间复杂度是O(logN)，空间复杂度是O(1)

解法1：依次将数组里面的各个数异或处理，如果2个数相等，则结果为0，最后剩下的一定是唯一出现一次的那个数。但是此方法的时间复杂度是O(N),不符合题目的要求。
 * */

int singleNonDuplicate1(int* nums, int numsSize){
    int res = 0;
    for(int i=0; i<numsSize; i++)
    {
        res ^= nums[i];
    }

    return res;
}
