/***************************************************
*      FileName: 415_AddStrings.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-27 14:56:08
*      LastModified: 2019-06-28 11:51:43
****************************************************/

/*
 415. Add Strings

Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.

 * */

#include <iostream>
#include <string>

using namespace std;


string addStrings(string num1, string num2) {

	int len1 = num1.length();
	int len2 = num2.length();
	int i, j;
	string res;
	string num = "0123456789";
	int sum = 0, flag = 0;

	//处理二者相同长度的部分
	for(i = len1 - 1, j = len2 -1; i >= 0 && j >= 0; i--, j--)
	{
		sum = (num1[i] - '0') + (num2[j] - '0') + flag;
		flag = sum / 10;
		sum = sum % 10;
		res += num[sum];
	}

	//若两个字符串长度不相等，则需要处理剩余的部分
	while(i>=0) //len1 > len2
	{
		sum = (num1[i] - '0') + flag;
		flag = sum / 10;
		sum = sum % 10;
		res += num[sum];
		i--;
	}

	while(j >= 0)
	{
		sum = num2[j] - '0' + flag;
		flag = sum / 10;
		sum %= 10;
		res += num[sum];
		j--;
	}

	//处理最后一位进位,也就是字符串的第一位有进位
	if(flag == 1)
	{
		res += "1";
	}
	reverse(res.begin(), res.end());

	return res;
}

int main()
{
	string num1 = "123459";
	string num2 = "456";
	string test1 = addStrings(num1, num2);
	cout << test1 << endl;

	return 0;
}
