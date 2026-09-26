// Last updated: 26/09/2026, 10:23:13
1class Solution {
2public:
3int SolveUsingMem(int n , vector<int> &dp){
4        if(n == 0 || n==1){
5            return 1;
6        
7        }
8       
9        if(dp[n] != -1){
10            return dp[n];
11        }
12
13        int ans =  SolveUsingMem(n-1,dp)+ SolveUsingMem(n-2,dp);
14        dp[n] = ans;
15        return dp[n];
16}
17    int climbStairs(int n ) {
18        vector<int> dp(n+1,-1);
19        int ans = SolveUsingMem(n,dp);
20        return ans;
21        
22    }
23};