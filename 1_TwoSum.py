#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 1_TwoSum.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-05-24 07:42:20
#      LastModified: 2019-05-24 07:42:29
#****************************************************


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_dict = {}

        for index, item in enumerate(nums):

            candidate = nums_dict.get(item)
            if candidate is not None:
                return [candidate, index]
            else:
                nums_dict[target - item] = index
