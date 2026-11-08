// Last updated: 08/11/2026, 23:19:32
1class Solution {
2public:
3    vector<int> getStrongest(vector<int>& arr, int k) {
4
5        sort(arr.begin(),arr.end());
6
7        int n = arr.size();
8        int mid = arr[(n - 1) / 2];
9
10        int i = 0;
11        int j = n - 1;
12
13        vector<int> ans;
14
15        while(k--) {
16
17            if(abs(arr[i] - mid) > abs(arr[j] - mid)) {
18                ans.push_back(arr[i]);
19                i++;
20            }
21            else {
22                ans.push_back(arr[j]);
23                j--;
24            }
25        }
26
27        return ans;
28        
29        
30    }
31};