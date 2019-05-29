/***************************************************
*      FileName: 540_SinglseElemInSortedArray.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-19 07:36:25
*      LastModified: 2019-05-19 07:41:42
****************************************************/


/*
 540. Single Element in a Sorted Array
 Given a sorted array consisting of only integers where every element appears exactly twice except for one element which appears exactly once. Find this single element that appears only once.

 Example 1:
Input: [1,1,2,3,3,4,4,8,8]
Output: 2

Example 2:
Input: [3,3,7,7,10,11,11]
Output: 10

分析：在一个排好序的数组中，除了一个整数只出现1次外，其他整数都出现了2次，找出这个整数，要求时间复杂度是O(logN)，空间复杂度是O(1)

解法1：异或法。依次将数组里面的各个数异或处理，如果2个数相等，则结果为0，最后剩下的一定是唯一出现一次的那个数，并且这个方法并不要求数组是排好序的。
       但是此方法的时间复杂度是O(N),不符合题目的要求。
 * */

int singleNonDuplicate1(int* nums, int numsSize){
    int res = 0;
    for(int i=0; i<numsSize; i++)
    {
        res ^= nums[i];
    }

    return res;
}

/*
解法2：逐个比较数组中的元素。根据条件，数组中的元素除了一个只出现一次外，其他元素都出现了2次，假设数组元素总个数为N，则N必然为奇数。由于数组的下标为0~N-1，可以
      得出这个元素的下标一定偶数，为0,2,4，，，N-1，只需取这些位置上的元素与后一个元素比较，如果不相等，则即为该元素。使用该方法并不严格要求数组拍好序，但是要
      求相等的元素必须相邻。
      此方法的实际复杂度也是O(N)，不符合题目要求。
*/
int singleNonDuplicate(int* nums, int numsSize) {
    int i = 0;
    while(i < numsSize)
    {
        if(nums[i] != nums[i+1])
            return nums[i];
        i += 2;
    }
    
    return nums[numsSize -1];
}

/*
上面的2种方法并没有严格要求数组是排好序的，我们思考要使查找的效率达到O(logN)，必须要用到数组已经是排好序的这个条件，由此得出下面的方法。
解法三：我们知道，二分查找的时间复杂度是O(logN)的，正好满足题目要求的实际复杂度。
       1.求出中间的索引mid，元素的总个数为奇数。
       2.如果mid为偶数，mid前面的元素个数为偶数，mid后面的元素个数也为偶数。此时比较mid和mid+1,如果二者相等，则可以得出要寻找的元素一定在mid后面，否则在mid前面。
       3.如果mid为奇数，mid前面的元素个数为奇数，mid后面的元素个数也为奇数。此时比较mid和mid-1,如果二者相等，则可以得出要寻找的元素一定在mid后面，否则在mid前面。
小技巧 如果i为偶数，i+1可以表示为 i^1
       如果i为奇数，i-1可以表示为 i^1
*/

int singleNonDuplicate(int* nums, int numsSize) {
    int l = 0;
    int r = nums.size() - 1;
    while (l < r) 
    {
        const int m = l + (r - l) / 2;
        int n = m % 2 == 0 ? m + 1 : m - 1;
        //const int n = m ^ 1;
        if (nums[m] == nums[n])
            l = m + 1;
        else
            r = m;
        }
    return nums[l];
}
