/***************************************************
*      FileName: 13_RomantoInteger.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-04 08:43:04
*      LastModified: 2019-06-04 08:47:12
****************************************************/

/*
 * 13 罗马字母变成整数
 *
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:
Input: "III"
Output: 3

Example 2:
Input: "IV"
Output: 4

Example 3:
Input: "IX"
Output: 9

Example 4:
Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

Example 5:
Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

分析：观察上面的例子可以得出，当左边的罗马字母比右边的罗马字母代表的数字小时，它们的整体代表的数就是二者的值相减，否则就是二者相加。
 * */

int getInteger(char singleRoman)
{
    int value = 0;
    switch(singleRoman)
    {
        case 'I':
            value = 1;
            break;
        case 'V':
            value = 5;
            break;
        case 'X':
            value = 10;
            break;
        case 'L':
            value = 50;
            break;
        case 'C':
            value = 100;
            break;
        case 'D':
            value = 500;
            break;
        case 'M':
            value = 1000;
            break;
    }

    return value;
}

int romanToInt(char * s){
    if(s == NULL)
    {
        return 0;
    }

    int sum = 0, i = 0;
    while(i<strlen(s))
    {
        if(getInteger(s[i+1]) > getInteger(s[i]))
        {
            sum += getInteger(s[i+1]) - getInteger(s[i]);
            i += 2;
        }
        else
        {
            sum += getInteger(s[i]);
            i += 1;
        }
    }

    return sum;
}


