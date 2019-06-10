/***************************************************
*      FileName: 35_SearchInsertPosition.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-10 09:20:29
*      LastModified: 2019-06-10 09:21:43
****************************************************/
/*
 35. Search Insert Position
分析：搜索插入的位置。如果目标存在，就返回目标在数组中的位置，如果不存在，就返回在数组中插入的位置。
 */


int searchInsert(int* nums, int numsSize, int target){
    if(nums == NULL || numsSize < 1)
    {
        return -1;
    }

    for(int i = 0; i<numsSize; i++)
    {
        if(nums[0]>= target)
        {
            return 0;
        }
        else if(nums[numsSize -1] < target)
        {
            return numsSize;
        }
        else if(nums[i] == target)
        {
            return i;
        }
        else
        {
            if(nums[i] < target && nums[i+1] > target)
            {
                return i+1;
            }
        }
    }
    return -1;
}


