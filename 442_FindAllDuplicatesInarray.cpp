/***************************************************
*      FileName: 442_FindAllDuplicatesInarray.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-29 07:39:50
*      LastModified: 2019-06-29 08:01:24
****************************************************/


/*
 442.Find All Duplicates in an Array
 Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.
Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]
Output:
[2,3]
 * */
#include <iostream>
#include <vector>

using namespace std;


vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;
    for(int i=0; i<nums.size(); i++){
        int pos = abs(nums[i])-1;
        if(nums[pos] < 0) duplicates.push_back(pos+1);
        else nums[pos] = -nums[pos];
    }
    return duplicates;
}

int main()
{
	vector<int> v={4,3,2,7,8,2,3,1};
	vector<int> result;
	result = findDuplicates(v);
	for(int j=0; j<result.size(); j++)
	{
		cout << result[j] << endl;
	}


	return 0;
}
