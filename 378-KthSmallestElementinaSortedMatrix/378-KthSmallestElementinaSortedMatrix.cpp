// Last updated: 25/10/2026, 07:47:35
1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& matrix, int k) {
4        int m= matrix.size();
5        int n = matrix[0].size();
6        vector<int> ans;
7        for(int i =0;i<m;i++){
8            for(int j=0;j<n;j++){
9                ans.push_back(matrix[i][j]);
10            }
11        }
12        sort(ans.begin(),ans.end());
13        return ans[k-1];
14        
15    }
16};