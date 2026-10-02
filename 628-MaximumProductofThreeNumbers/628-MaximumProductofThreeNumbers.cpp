// Last updated: 02/10/2026, 10:44:49
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6         return max(
7            nums[n-1] * nums[n-2] * nums[n-3],
8            nums[0] * nums[1] * nums[n-1]
9         );
10        
11        
12    }
13};