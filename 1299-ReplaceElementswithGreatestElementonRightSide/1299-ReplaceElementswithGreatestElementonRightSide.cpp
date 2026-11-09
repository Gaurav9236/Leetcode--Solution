// Last updated: 09/11/2026, 19:33:04
1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int n = arr.size();
5        int maxi = -1;
6        for(int i = n-1; i>=0;i--){
7            int temp = arr[i];
8            arr[i] = maxi;
9            maxi = max(maxi , temp);
10
11        }
12        return arr;
13        
14        
15    }
16};