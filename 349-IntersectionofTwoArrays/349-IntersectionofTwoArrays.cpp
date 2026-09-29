// Last updated: 29/09/2026, 10:27:30
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> st(nums1.begin(), nums1.end());
5        unordered_set<int> ans;
6        for(int i : nums2){
7            if(st.count(i)){
8                ans.insert(i);
9            }
10        }
11        return vector<int> (ans.begin(),ans.end());
12        
13    }
14};