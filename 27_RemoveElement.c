/***************************************************
*      FileName: 27_RemoveElement.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-10 08:51:17
*      LastModified: 2019-06-10 08:55:21
****************************************************/

/*
 * 27. Remove Element
 分析：移除数组中指定的元素。数组是未排好序的，移除的时候可以改变数组中元素的相对位置。
 思路：遍历数组，并准备一个计数器，将数组中的元素和给定的元素一一比较，有不相等的计数器加1，并将元素覆盖到原来数组的位置，最后返回计数器的个数N就是原数组的前N位。
 * */

int removeElement(int* nums, int numsSize, int val){
    if(nums == NULL || numsSize < 1)
    {
        return 0;
    }

    int i = 0;
    for(int j = 0; j<numsSize; j++)
    {
        if(nums[j] != val)
        {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}

