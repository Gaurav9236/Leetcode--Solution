// Last updated: 29/05/2026, 08:45:10
1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4        int n = mat.size();
5        int sum = 0;
6        for(int i = 0; i<n; i++){
7            sum+=mat[i][i];
8        }
9
10        for(int i = 0; i<n; i++){
11            sum += mat[i][n-i-1];
12        }
13
14        //for duplicate
15        if(n&1){
16            sum -= mat[n/2][n/2];
17        }
18        
19        return sum;
20    }
21};