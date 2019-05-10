#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 70_ClimbingStairs.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-05-11 06:36:27
#      LastModified: 2019-05-11 06:59:35
#****************************************************
'''
70. Climbing Stairs
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Note: Given n will be a positive integer.

Example 1:
Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
'''

'''
爬楼梯问题：如果有N阶楼梯，每次可以爬1步或者2步，共有多少种方法？
分析：
    1.如果只有1阶，每次1步，即1，共有1种方法
    2.如果有2阶，每次1步或者1次2步，即1+1，2，共有2种方法
    3.如果有3阶，假设你离终点还有1阶，则你已经走了3-1=2阶；假设你离终点还有2步，则你已经走了3-2=1.由此得出共有f(1阶)+f(2阶)=1+2=3种
    4.推广到N阶，则有f(N) = f(N-1) + f(N-2),也就是斐波那契数列数列，N阶楼梯的方法也就是数列的第N项

    算法采用迭代，时间复杂度O(N),空间复杂度O(1)
    f,g分别代表数列中的第N-1项和第N项，相当于自底向上进行递归，存储了每一个数列的项，当高次项进行计算时，可以直接调用低次项的计算结果，避免了大量的重复计算。
'''

class Solution:
    def climbStairs(self, n: int) -> int:
        if n < 3:
            return n
        f = 0
        g = 1
        while n > 0:
            g = g + f
            f = g - f
            n = n - 1

        return g
