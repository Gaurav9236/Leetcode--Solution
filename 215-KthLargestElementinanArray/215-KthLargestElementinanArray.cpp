// Last updated: 28/09/2026, 13:23:10
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        int n = nums.size();
5        sort(nums.begin(), nums.end());
6        return nums[n-k];
7
8        
9    }
10};