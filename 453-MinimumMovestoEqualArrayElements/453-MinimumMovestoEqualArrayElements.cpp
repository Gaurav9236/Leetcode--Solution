// Last updated: 01/11/2026, 08:22:10
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        int moves =0;
5        sort(nums.begin(), nums.end());
6        for(int i =1; i<nums.size();i++){
7            int count = nums[i]-nums[0];
8            moves += count;
9        }
10        return moves;
11        
12    }
13};