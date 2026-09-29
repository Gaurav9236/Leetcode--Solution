// Last updated: 29/09/2026, 11:45:26
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        int n = nums.size();
5        unordered_set<int> st;
6        for(int i : nums){
7            st.insert(i);
8        }
9        vector<int> ans;
10        for(int i =1; i<=n;i++){
11            if(st.find(i) == st.end()){
12                ans.push_back(i);
13            }
14        }
15        return ans;
16
17        
18    }
19};