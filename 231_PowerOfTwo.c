/***************************************************
*      FileName: 231_PowerOfTwo.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-15 22:35:36
*      LastModified: 2019-05-15 23:03:17
****************************************************/
/*
	231. Power of Two
Given an integer, write a function to determine if it is a power of two.

Example 1:
Input: 1
Output: true
Explanation: 2^0 = 1

Example 2:
Input: 16
Output: true
Explanation: 2^4 = 16

Example 3:
Input: 218
Output: false

分析：给定一个整数，判断该数是否是2的幂，例如1是2的0次方，16是2的四次方，218不是2的整数次方
思路：2的N次方的分布如下(只考虑N>=0的情况)，1，2，4，8，16，32，，，，，，
	  1.观察上述数列，排除第1项，从4开始，后面的每一项除以2以后都依然是2的幂，则可以运用递归法，
	  每次将整数折半，递归求解

	  2.位与法。如果一个t数是2的幂，假设t=2^n,则t-1=2^n-1。如果将该整数表示为2进制，则t的第n位数      字为1，其他位为0，t-1的第n位为0，第n-1到第1位都为1，则二者按位与则为0，根据这一性质即可判       断该整数是否是2的幂。
	   t     10000000......0
       t-1   01111111......1
	   结果  00000000......0
 * */

bool isPowerOfTwo(int n){
    if(n <= 0)
    {
        return false;
    }
    else if(n == 1 || n == 2)
    {
        return true;
    }
    else
    {
        if(n % 2)
        {
            return false;
        }
        else
        {
            n = (int) n / 2;
            return isPowerOfTwo(n);
        }
    }
}

bool isPowerOfTwo2(int n){
    if(n <= 0)
    {
        return false;
    }

    return !(n & (n - 1));
}
