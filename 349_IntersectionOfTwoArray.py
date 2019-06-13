#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 349_IntersectionOfTwoArray.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-06-13 22:39:02
#      LastModified: 2019-06-13 22:44:43
#****************************************************
'''
349. Intersection of Two Arrays
Given two arrays, write a function to compute their intersection.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Note:
Each element in the result must be unique.
The result can be in any order.


分析：求2个数组的共同的元素，返回值为共同元素组成的数组
思路：根据Python集合的特性，唯一性。1.将两个数组变成set，2，遍历两个集合，找出共同的元素放在一个数组中返回。

'''


class Solution:

    '''
    def set_intersection(self, set1, set2):
        return [x for x in set1 if x in set2]

    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = set(nums1) #set的唯一性
        set2 = set(nums2)

        if len(set1) < len(set2):
            return self.set_intersection(set1, set2)
        else:
            return self.set_intersection(set1, set2)
    '''

    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        set1 = set(nums1)
        set2 = set(nums2)

        return list(set1 & set2) #利用set的元素的唯一性求共同的元素，并返回list

