// Last updated: 07/10/2026, 17:16:57
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5
6        for(int i = 0; i < nums.size(); i++) {
7            if(mp.count(nums[i])) {
8
9                if(i - mp[nums[i]] <= k) {
10                    return true;
11                }
12            }
13            mp[nums[i]] = i;
14        }
15        return false;
16        
17        
18    }
19};