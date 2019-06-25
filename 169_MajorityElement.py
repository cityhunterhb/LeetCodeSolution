#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 169_MajorityElement.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-06-25 08:54:04
#      LastModified: 2019-06-25 08:56:11
#****************************************************

'''
169. Majority Element
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:
Input: [3,2,3]
Output: 3

Example 2:
Input: [2,2,1,1,1,2,2]
Output: 2

思路：1.先排序，再比较
      2.hashmap
'''

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        return nums[len(nums) // 2]

