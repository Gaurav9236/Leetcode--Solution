// Last updated: 13/10/2026, 15:53:19
1class Solution {
2public:
3    // int SolveUsingRec(vector<int>& nums , int curr ,int prev){
4
5    //     if(curr>=nums.size()){
6    //         return 0;
7    //     }
8    //     int include =0;
9    //     if(prev ==-1 || nums[curr] > nums[prev]){
10    //         include = 1 + SolveUsingRec(nums, curr+1 , curr);
11    //     }
12    //     int exclude = 0 + SolveUsingRec(nums,curr+1 , prev);
13    //     return max(include, exclude);
14    // }
15     
16     int SolveUsingMemoization(vector<int>& nums , int curr ,int prev ,vector<vector<int>>&dp){
17
18        if(curr>=nums.size()){
19            return 0;
20        }
21        if(dp[curr][prev+1] !=-1){
22            return dp[curr][prev+1];
23        }
24        int include =0;
25        if(prev ==-1 || nums[curr] > nums[prev]){
26            include = 1 + SolveUsingMemoization(nums, curr+1 , curr ,dp);
27        }
28        int exclude = 0 + SolveUsingMemoization(nums,curr+1 , prev, dp);
29        return dp[curr][prev+1]=  max(include, exclude);
30    }
31
32    int lengthOfLIS(vector<int>& nums) {
33
34        // return SolveUsingRec(nums , 0 ,-1);
35        int n = nums.size();
36        vector<vector<int>> dp(n+1, vector<int>(n+1 ,-1) );
37        int curr =0 , prev =-1;
38        return SolveUsingMemoization(nums, curr , prev , dp);
39        
40    }
41};