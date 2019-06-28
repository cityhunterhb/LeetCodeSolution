/***************************************************
*      FileName: 461_HammingDistance.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-28 11:01:15
*      LastModified: 2019-06-28 11:05:29
****************************************************/

/**
 461.Hamming Distance

 The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4
Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.

分析：求2个整数的汉明距离
思路：汉明距离就是两个数异或以后二进制表示所包含的1的个数
 *
 */


int hammingDistance(int x, int y)
{
	int result = x ^ y;
	int count = 0;

	while(result != 0)
	{
		if(result & 0x01)
		{
			count++;
		}

		result >>= 1;
	}

	return count;
}
