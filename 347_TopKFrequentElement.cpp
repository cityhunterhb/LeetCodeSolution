/***************************************************
*      FileName: 347_TopKFrequentElement.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-17 07:58:53
*      LastModified: 2019-06-17 08:16:35
****************************************************/
/*
 347. Top K Frequent Elements
 Given a non-empty array of integers, return the k most frequent elements.

Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1]

Note:
You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
 * */


//hashmap + priority_queue
struct comp{
    bool operator()(pair<int, int> &a, pair<int, int> &b){
        return a.second < b.second;// 从大到小排序
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        // comp是结构体 自定义的排序方式
        priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
        for(int num:nums){
            mp[num]++;
        }
        for(auto m:mp){
            pq.push(m);
        }
        for(int i=0; i<k; i++){
            res.push_back(pq.top().first);
            pq.pop();
        }
        return res;
    }
};


//hashmap + bucket_sorting
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 哈希 + 桶排序
        unordered_map<int, int> mp;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> res;
        // 哈希表统计频率
        for(int num:nums) mp[num]++;
        // 以频率作为key 进行分桶
        for(auto m:mp){
            bucket[m.second].push_back(m.first);
        }
        // 从桶中找出频率前k的元素存储到结果中
        for(int i=bucket.size()-1; i>=0&&res.size()<k; i--){
            for(int ele:bucket[i]){
                res.push_back(ele);
                if(res.size()==k) break;
            }
        }
        return res;
    }
};
