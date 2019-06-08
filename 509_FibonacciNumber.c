/***************************************************
*      FileName: 509_FibonacciNumber.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-09 06:41:55
*      LastModified: 2019-06-09 06:43:27
****************************************************/
/*
 * 509  Fibonacci Number
 *
 分析：求斐波拉切数
 思路：自底向上递归。存储每一次计算的结果，新的计算直接使用上一次的计算结果即可。
 * */


int fib(int N){
    int f = 0, g = 1;
    while(N-- > 0)
    {
        g = g + f;
        f = g - f;
    }

    return f;
}


