/***************************************************
*      FileName: 905_SortArrayByParity.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-20 17:39:11
*      LastModified: 2019-06-20 18:00:28
****************************************************/
/*
 905 Sort Array By Parity
 Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.

Example 1:
Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

分析：将数组中所有的元素分成两部分，偶数在前，奇数在后
思路：类似双指针，分别从数组头和尾查找，如果头发现有奇数，尾发现有偶数就交换，反之继续前行，当2根指针相遇的时候循环结束。
 * */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//空间复杂度为O(N)
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    if(A == NULL || ASize < 1)
    {
        *returnSize = 0;
        return NULL;
    }

    int *array = (int *)malloc(sizeof(int) * ASize);
    int i = 0, j = ASize - 1;
    for(int k = 0; k < ASize; k++)
    {
        if(i <= j)
        {
            if(A[k] % 2 == 0)
            {
                array[i++] = A[k];
            }
            else
            {
                array[j--] = A[k];
            }
        }
    }
    *returnSize = ASize;

    return array;
}


//空间复杂度为O(1)
int* sortArrayByParity2(int* A, int ASize, int* returnSize){
    if(A == NULL || ASize < 1)
    {
        *returnSize = 0;
        return NULL;
    }

    int i = 0, j = ASize - 1;
    while(i <= j)
    {
        if(A[i] % 2 != 0 && A[j] % 2 == 0)
        {
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
            i++;
            j--;
        }
        else
        {
            if(A[i] % 2 == 0)
            {
                i++;
            }
            if(A[j] % 2 != 0)
            {
                j--;
            }
        }
    }
    *returnSize = ASize;

    return A;
}
