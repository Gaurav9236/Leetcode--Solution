// Last updated: 17/11/2026, 19:10:38
1class Solution {
2public:
3    int Solve(int i , int j, vector<vector<int>>& grid , vector<vector<int>> &dp){
4        if(i<0 || j<0){
5            return INT_MAX;
6        }
7        if(i==0 && j==0){
8            return grid[0][0];
9        }
10        if(dp[i][j] != -1){
11            return dp[i][j];
12        }
13
14        int up = Solve(i-1,j,grid , dp);
15        int left = Solve(i,j-1,grid ,dp);
16        dp[i][j] = grid[i][j] + min(up,left);
17
18        return dp[i][j];
19    }
20    int minPathSum(vector<vector<int>>& grid) {
21        int m = grid.size();
22        int n = grid[0].size();
23        vector<vector<int>> dp(m , vector<int> (n , -1));
24        return Solve(m-1 , n-1 , grid , dp);
25        
26    }
27};