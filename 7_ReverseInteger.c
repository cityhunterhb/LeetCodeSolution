/*
7. Reverse Integer

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:
Input: 120
Output: 21

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

分析：反转整数，如果为负数，只反转数的数位，不改变数的符号；反转后如果数字的首位或前几位都是0，则依次向后移动
思路：数的范围是-2^31 ~ 2^31-1， 即-2147483648 ~ 2147483647
	先依次取整数的各个数位，依次得到个位，十位，百位，千位，，，，，，
*/

/*int reverse(int x){
    if(x > 2147483647 || x < -2147483648)
    {
        return 0;
    }

    int flag = 0;
    long y = x;
    if(x < 0)
    {
        y = (long)((-1) * x);
        if(y == 2147483648)
        {
            return 0;
        }
        flag = 1;
    }

    long result = 0;
    while(y)
    {
        //printf("11 x=%d result=%d\n", x, result);
        result = result * 10 + y % 10;
        y /= 10;
        //printf("22 x=%d result=%d\n", x, result);
    }

    if(flag)
    {
        result = (-1) *result;
    }

    if(result > 2147483647 || x < -2147483648)
    {
        return 0;
    }

    return (int)result;

}*/

int reverse(int x){
    if(x > 2147483647 || x < -2147483648)
    {
        return 0;
    }
    
    int nums = 0;
    while(x){
        if (abs(nums)>INT_MAX/10)//这里除10以后数的范围不会超过最大值，相当于 x/10 和 INT_MAX/10比较。如果数是-2147483648时，绝对值已经超过了int范围，必须使用long才可以
        {
            return 0;
        }
        nums = nums*10 + x%10;
        x/=10;
    }
    return nums;
}
