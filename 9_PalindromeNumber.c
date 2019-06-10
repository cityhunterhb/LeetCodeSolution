/***************************************************
*      FileName: 9_PalindromeNumber.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-10 08:28:57
*      LastModified: 2019-06-10 08:38:50
****************************************************/
/*
 9 PalindromeNumber
 分析：判断一个整数是否为回文数，例如121是回文数，-121不是，10不是
 思路：将数字反转，得出的数与原来相等，就是回文数。
 * */

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        if(x >=0 && x <=9)
        {
            return true;
        }

        int reminder = 0;
        int number = x;
        double now = 0;
        while(number > 0)
        {
            reminder = number % 10;
            now = now * 10 + reminder;
            number = number / 10;
        }

        if(x == now)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
