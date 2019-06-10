#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 387_FirstUnigueCharinStr.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-06-08 23:04:42
#      LastModified: 2019-06-08 23:07:49
#****************************************************

'''
387. First Unique Character in a String
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:
s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.

分析：找出第一次在字符串中自出现一次的字符
思路：使用hashmap.
      使用hashmap将字符串映射，遍历hashmap，如果字符串只出现了一次，则其hash值为1，否则就大于1.
'''

class Solution:
    def firstUniqChar(self, s: str) -> int:
        count = collections.Counter(s) #hashmap

        index = 0
        for ch in s:
            if count[ch] == 1:
                return index;
            else:
                index += 1
        return -1;
