// Last updated: 17/11/2026, 22:29:08
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6
7        vector<int> rows(m,0);
8        vector<int> cols(n,0);
9
10        for(int i =0; i<m;i++){
11            for(int j =0; j<n;j++){
12                if(matrix[i][j] ==0){
13                    rows[i]=1;
14                    cols[j]=1;
15                }
16            }
17        }
18        for(int i =0; i<m;i++){
19            for(int j =0; j<n;j++){
20                if(rows[i] == 1 || cols[j] == 1){
21                    matrix[i][j] =0;
22                }
23
24            }
25        }
26      
27        
28    }
29};