// Last updated: 15/10/2026, 07:20:42
1class Solution {
2public:
3    int sumCounts(vector<int>& nums) {
4        int n = nums.size();
5        int ans =0;
6        for(int i =0; i<n;i++){
7            unordered_set<int> st;
8            for(int j =i; j<n;j++){
9                st.insert(nums[j]);
10
11                ans += st.size()*st.size();
12            }
13        }
14        return ans;
15        
16    }
17};