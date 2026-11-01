// Last updated: 01/11/2026, 08:12:00
1class Solution {
2public:
3    int minMergedInteger(vector<int>& nums) {
4        long long ans = LLONG_MAX;
5        for(int i =0; i<nums.size();i+=2){
6            string merged  = to_string(nums[i])+ to_string(nums[i+1]);
7            long long val = stoll(merged);
8            ans = min (ans , val);
9        }
10        return ans;
11        
12    }
13};