// Last updated: 30/09/2026, 09:35:43
1class Solution {
2public:
3    int minMoves2(vector<int>& nums) {
4        int n = nums.size();
5        int steps =0;
6        sort(nums.begin() , nums.end());
7        int median = nums[n/2];
8        for(int i =0; i<n;i++){
9            steps += abs(median - nums[i]);
10        }
11        return steps;
12
13        
14    }
15};