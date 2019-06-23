#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 88_MergeSortedArray.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-06-23 09:33:54
#      LastModified: 2019-06-23 09:35:30
#****************************************************
'''
88.Merge Sorted Array
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]

分析：合并两个排好序的数组，合并后也是有序的
思路：先将2个数组变成1个数组，然后再排序
'''

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if not nums2:
            return None
        i,j=m,0
        while i <n+m:
            nums1[i]=nums2[j]
            i+=1
            j+=1

        nums1.sort()
