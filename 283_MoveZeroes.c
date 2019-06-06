/***************************************************
*      FileName: 283_MoveZeroes.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-05 08:06:50
*      LastModified: 2019-06-06 08:35:39
****************************************************/


void moveZeroes(int* nums, int numsSize){
    if(nums == NULL || numsSize < 2)
    {
        return;
    }

    int i = 0, j = numsSize - 1;
    while(i < j)
    {
        if(nums[i] == 0 && nums[j] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j--;
        }

        i++;

    }
}

void moveZeroes2(int* nums, int numsSize){
    if(nums == NULL || numsSize < 2)
    {
        return;
    }
    /*
    int i = 0, j = numsSize - 1;
    while(i < j)
    {
        if(nums[i] == 0 && nums[j] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j--;
        }

        i++;

    }*/

    //method2
    int validIndex = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0) {
            nums[validIndex] = nums[i];
            validIndex++;
        }
    }
    for (int i = validIndex; i < numsSize; i++) {
        nums[i] = 0;
    }

}




