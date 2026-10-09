// Last updated: 09/10/2026, 17:08:34
1class Solution {
2public:
3    int Solve(vector<int>& cost , int i ,  vector<int> &dp){
4        if(i>=cost.size()){
5            return 0;
6        }
7        if(dp[i]!=-1){
8            return dp[i];
9        }
10        int onestep = Solve(cost , i+1,dp);
11        int twostep = Solve(cost , i+2 ,dp);
12
13        return dp[i] = cost[i] + min(onestep , twostep);
14    }
15    int minCostClimbingStairs(vector<int>& cost) {
16        int n = cost.size();
17        vector<int> dp(n+1,-1);
18        
19        return min(Solve(cost ,0,dp) ,
20                    Solve(cost ,1,dp));
21    }
22};