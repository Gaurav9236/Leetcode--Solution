// Last updated: 08/02/2026, 21:29:57
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        for(int &x : nums){
5            x = x * x;  
6        }
7        sort(nums.begin(), nums.end());  
8        return nums;
9        
10    }
11};