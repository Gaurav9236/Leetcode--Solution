// Last updated: 26/11/2025, 23:57:34
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k = k % n; 
6        
7        reverse(nums.begin(), nums.end());
8        
9        reverse(nums.begin(), nums.begin() + k);
10        
11        reverse(nums.begin() + k, nums.end());
12    }
13    
14};