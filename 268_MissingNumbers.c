/***************************************************
*      FileName: 268_MissingNumbers.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-07 06:20:37
*      LastModified: 2019-06-07 06:24:01
****************************************************/
/*Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:

Input: [3,0,1]
Output: 2
Example 2:

Input: [9,6,4,2,3,5,7,0,1]
Output: 8
Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?

268 找出数组中国缺失的数
分析：根据等差数列的求和公式，0，1，2，，，，n，数列的和为 n*(n+1)/2，用数列的和减去数组的每一项，即可得出缺失的哪一项。
tips:这个方法的时间复杂度是O(N)，空间复杂度为O(1).提交的结果很靠后,但是暂时没有想到别的好的方法。

*/

int missingNumber(int* nums, int numsSize){
    if(nums == NULL || numsSize < 1)
    {
        return -1;
    }

    double sum = numsSize * (numsSize + 1) / 2;
    for(int i=0; i<numsSize; i++)
    {
        sum -= nums[i];
    }

    return (int)sum;
}


