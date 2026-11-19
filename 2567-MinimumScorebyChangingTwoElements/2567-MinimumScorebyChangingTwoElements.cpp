// Last updated: 19/11/2026, 21:32:47
1class Solution {
2public:
3    int minimizeSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6
7        int case1 = nums[n-1]-nums[2];
8        int case2 = nums[n-2]-nums[1];
9        int case3 = nums[n-3]-nums[0];
10
11        return min({case1 , case2 , case3});
12        
13    }
14};