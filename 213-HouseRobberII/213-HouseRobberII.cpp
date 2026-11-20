// Last updated: 20/11/2026, 23:28:25
1class Solution {
2public:
3    int solve(vector<int>& nums, int s, int e, vector<int> &dp){
4        if(s>e){
5            return 0;
6        }
7        if(dp[s] != -1){
8            return dp[s];
9        }
10
11        int option1 = nums[s] + solve(nums, s+2, e , dp);
12
13        int option2 = 0 + solve(nums, s+1,e , dp);
14
15        dp[s] = max(option1,option2);
16        return dp[s];
17
18    } 
19    int rob(vector<int>& nums) {
20        int n= nums.size();
21        vector<int> dp1(n+1 , -1);
22        vector<int> dp2(n+1 , -1);
23
24        if(n == 1){
25            return nums[0];
26        }
27        int option1 = solve(nums, 0, n-2 ,dp1);
28        int option2 = solve(nums, 1, n-1 , dp2);
29        int ans = max(option1, option2);
30        return ans;
31        
32    }
33};