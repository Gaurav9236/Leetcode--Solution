// Last updated: 29/05/2026, 09:11:18
1class Solution {
2public:
3    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
4        int rows = matrix.size();
5        int cols = matrix[0].size();
6
7        vector<vector<int>> transpose(cols, vector<int>(rows,0));
8
9        for(int i = 0; i<cols; i++){
10            for(int j = 0; j<rows; j++){
11                transpose[i][j] = matrix[j][i];
12            }
13        }
14        return transpose;
15        
16    }
17};