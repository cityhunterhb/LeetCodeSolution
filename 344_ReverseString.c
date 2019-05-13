/***************************************************
*      FileName: 344_ReverseString.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-12 19:51:55
*      LastModified: 2019-05-12 20:01:37
****************************************************/


/*
 	344. Reverse String
 Write a function that reverses a string. The input string is given as an array of characters char[].
 Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 You may assume all the characters consist of printable ascii characters.
 Example 1:

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

分析：反转字符，原地操作，使用额外的内存空间为O(1)
方案：直接交换操作，第一个字符与倒数第一个交换，第二个字符与倒数第二个交换，，，，第i个字符与倒数第i个交换。数组的下标从0开始，则可以得到交换的下标对，假设共有N个元素
[0, N-1], [1,N-2], [2, N-3],,,,,[i, N-1-i]
 * */

void reverseString(char* s, int sSize){
    if(s == NULL || sSize < 2)
    {
        return;
    }

    char temp;
    //如果sSize为奇数，则最中间的那个字符不用交换，下标正好是sSize/2
    //如果sSize是偶数，则第sSize/2-1个字符正好与第sSize/2个字符进行交换，故可以得出循环的控制条件
    for(int i=0; i<(sSize/2); i++)
    {
        temp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - 1 - i] = temp;
    }
}


