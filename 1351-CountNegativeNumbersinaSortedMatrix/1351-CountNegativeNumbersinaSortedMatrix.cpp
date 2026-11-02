// Last updated: 02/11/2026, 18:33:49
1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        
5        int count =0; 
6        for(int i =0 ; i<grid.size();i++){
7            for(int j =0; j< grid[i].size();j++){
8                if(grid[i][j]<0){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};