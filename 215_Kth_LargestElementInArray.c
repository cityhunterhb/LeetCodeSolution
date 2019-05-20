/*
215. Kth Largest Element in an Array

Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:
Input: [3,2,1,5,6,4] and k = 2
Output: 5

Example 2:
Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4

分析：找出数组中第K大的数，数组未排序
思路：先排序数组，然后直接可以找出第K大的数，使用快速排序
*/

void quick_sort1(int A[], int l, int r)
{
    if(A == NULL || l > r)
    {
        return;
    }

    if(l < r)
    {
        int i = l;
        int j = r;
        int x = A[l]; //基准
        while(i < j)
        {
            while(i<j && x<=A[j])//从右向左
            {
                j--;
            }

            if(i < j)
            {
                A[i++] = A[j];
            }

            while(i<j && A[i]<x)
            {
                i++;
            }

            if(i<j)
            {
                A[j--] = A[i];
            }
        }
        A[i] = x;
        quick_sort1(A, l, i-1);
        quick_sort1(A, i+1, r);
    }
}

int findKthLargest(int* nums, int numsSize, int k) {
    quick_sort1(nums, 0, numsSize -1);
    return(nums[numsSize - k]);
}
