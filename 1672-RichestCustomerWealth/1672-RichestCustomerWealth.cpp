// Last updated: 24/10/2026, 09:54:13
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int row = accounts.size();
5        int column = accounts[0].size();
6        int maxi = 0;
7        
8        for(int i = 0;i<row;i++){
9            int sum =0;
10            for(int j =0; j<column;j++){
11                sum += accounts[i][j];
12                
13            }
14            maxi = max(maxi , sum);
15            
16        }
17        return maxi;
18        
19    }
20};