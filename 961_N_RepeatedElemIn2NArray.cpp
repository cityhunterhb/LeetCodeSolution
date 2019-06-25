/***************************************************
*      FileName: 961_N_RepeatedElemIn2NArray.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-25 08:45:28
*      LastModified: 2019-06-25 08:50:40
****************************************************/
/*
  961. N-Repeated Element in Size 2N Array
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
Return the element repeated N times.

Example 1:
Input: [1,2,3,3]
Output: 3

Example 2:
Input: [2,1,2,5,3,2]
Output: 2

Example 3:
Input: [5,1,5,2,5,3,5,4]
Output: 5

Note:
4 <= A.length <= 10000
0 <= A[i] < 10000
A.length is even

思路：目前想到了3种方法。
	  1.暴力解法，时间复杂度O(N^2),空间复杂度为O(1)。遍历数组，将元素逐个与后面的元素比较，如果相等，则返回该元素。
	  2.先排序，再比较。时间复杂度O(NlogN),空间复杂度为O(1).
	  3.hashmap.时间复杂度O(N),空间复杂度为O(N).
 * */

int repeatedNTimes(int* A, int ASize){
    for(int i=0; i<ASize; i++)
    {
        for(int j=i+1; j<ASize; j++)
        {
            if(A[i] == A[j])
            {
                return A[i];
            }
        }
    }

    return -1;
}

