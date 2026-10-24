// Last updated: 24/10/2026, 09:45:09
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int row = matrix.size();
5        int column = matrix[0].size();
6        
7        // Phle transpose lenge
8        for(int i =0; i<row;i++){
9            for(int j = i+1;j<column;j++){
10                swap(matrix[i][j] , matrix[j][i]);
11            }
12        }
13        //uske baad hr row ko reverse kr denge
14        for(int i =0; i<row;i++){
15            reverse(matrix[i].begin() , matrix[i].end());
16        }
17        
18    }
19};