// Last updated: 14/10/2026, 14:46:53
1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4         sort(arr.begin(), arr.end());
5
6        vector<vector<int>> ans;
7        int diff = INT_MAX;
8
9
10        for (int i = 0; i < arr.size() - 1; i++) {
11            diff = min(diff, arr[i + 1] - arr[i]);
12        }
13        for (int i = 0; i < arr.size() - 1; i++) {
14            if (arr[i + 1] - arr[i] == diff) {
15                ans.push_back({arr[i], arr[i + 1]});
16            }
17        }
18
19        return ans;
20        
21    }
22};