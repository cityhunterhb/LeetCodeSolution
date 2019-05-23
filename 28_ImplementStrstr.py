#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 28_ImplementStrstr.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-05-24 07:54:51
#      LastModified: 2019-05-24 07:54:56
#****************************************************


class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if not needle:
            return 0
        s_ = needle+"#"+haystack
        Pi = [0] * len(s_)
        for i in range(1,len(s_)):
            p = Pi[i-1]
            while p > 0 and s_[i] != s_[p]:
                p = Pi[p-1]
            if s_[i] == s_[p]:
                p +=1
            Pi[i] = p
            if Pi[i] == len(needle):
                return i-2*len(needle)
        return -1
