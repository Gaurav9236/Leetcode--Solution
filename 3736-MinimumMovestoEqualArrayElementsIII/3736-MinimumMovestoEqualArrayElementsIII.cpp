// Last updated: 03/11/2026, 18:13:17
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        sort(nums.begin() , nums.end());
5        int count =0;
6        int n = nums.size();
7        for(int i =0 ;i<n;i++){
8            count += nums[n-1]-nums[i];
9
10        }
11        return count;
12        
13    }
14};