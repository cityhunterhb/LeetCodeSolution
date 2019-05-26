/***************************************************
*      FileName: 136_SingleNumber.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-27 07:45:48
*      LastModified: 2019-05-27 07:48:52
****************************************************/

/*
 题目：在一个非空数组中找到一个只出现了一次的元素，其他元素都出现了两次
 分析：位异或法，两个相同的数字异或结果为0
  */

int singleNumber(int* nums, int numsSize){
    int res = 0;
    for(int i=0; i<numsSize; i++)
    {
        res ^= nums[i];
    }

    return res;
}



