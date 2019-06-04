/***************************************************
*      FileName: 217_ContainsDuplicate.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-04 16:22:52
*      LastModified: 2019-06-04 16:31:22
****************************************************/


/*
 217 数组中包含重复的元素
 一个无序的数组，判断里面至少存在一对相同的数，如果存在，返回True，否则返回false。

 Example 1:
Input: [1,2,3,1]
Output: true

Example 2:
Input: [1,2,3,4]
Output: false

Example 3:
Input: [1,1,1,3,3,4,3,2,4,2]
Output: true

思路分析：
1.暴力解法。遍历数组中的元素，将每一个元素与剩下的所有元素一一比较，如果有相等就返回True，否则返回false。这种方法的时间复杂度是O(N^2)，指数尺度。
2.排序后查找。先将数组排序，然后遍历数组，将数组中每个元素与相邻元素比较，有相等就返回True，否则返回false。
3.Hash表。将数组中的元素存入hash表，最后比较hash表长和数组的长度，如果相等返回false，否则返回True。
 * */

//1.c
bool containsDuplicate(int* nums, int numsSize){
    if(nums == NULL || numsSize < 2)
    {
        return false;
    }

    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                return true;
            }
        }
    }

    return false;
}




//3.python set<->hash
#if 0
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return (len(set(nums)) != len(nums))
#endif
