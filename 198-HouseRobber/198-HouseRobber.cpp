// Last updated: 25/09/2026, 22:34:41
1class Solution {
2public:
3     // This give TLE So we can use dp in it
4     
5    // int SolveUsingRecursion(vector<int> &nums, int index){
6    //     if(index >=nums.size()){
7    //         return 0;
8    //     }
9    //     int include = nums[index] + SolveUsingRecursion(nums, index+2);
10    //     int exclude =  0 + SolveUsingRecursion(nums , index+1);
11    //     int ans =  max(include, exclude);
12    //     return ans;
13
14    // }
15
16    // Solve Bottom up approach Memoization
17
18    int SolveUsingMemoization(vector<int> &nums, int index ,  vector<int> &dp){
19        if(index >=nums.size()){
20            return 0;
21        }
22        if(dp[index]!= -1){
23            return dp[index];
24        }
25
26        int include = nums[index] + SolveUsingMemoization(nums, index+2 , dp);
27        int exclude =  0 + SolveUsingMemoization(nums , index+1, dp);
28        dp[index] =  max(include, exclude);
29        return dp[index]; 
30    }
31
32    int rob(vector<int>&nums){
33        int n = nums.size();
34        vector<int> dp(n+1 , -1);
35        int index = 0 ;
36        int ans = SolveUsingMemoization(nums , index ,dp);
37        return ans;
38        
39    }
40};