// Last updated: 27/10/2026, 20:53:30
1class Solution {
2public:
3    bool searchInRow(vector<vector<int>>& mat, int target , int row){
4        int n = mat[0].size();
5        int st =0 , end =n-1;
6
7        while(st <= end){
8            int mid = st + (end - st)/2;
9            if(target == mat[row][mid]){
10                return true;
11            }
12            else if(target > mat[row][mid]){
13                st = mid+1;
14            }
15            else{
16                end = mid-1;
17            }
18        }
19        return false;
20    }
21    bool searchMatrix(vector<vector<int>>& mat, int target) {
22        int m = mat.size();
23        int n = mat[0].size();
24        int startRow = 0 , endRow = m-1;
25        while(startRow <= endRow){
26            int midRow = startRow + (endRow - startRow)/2;
27            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
28                return searchInRow(mat , target , midRow);
29            }
30            else if(target >= mat[midRow][n-1]){
31                startRow = midRow+1;
32            }
33            else{
34                endRow = midRow-1;
35            }
36        }
37        return false;
38       
39    }
40};