// Last updated: 23/11/2026, 18:44:42
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        unordered_set<int> st;
5
6        for(int i : nums){
7            if(i>0){
8                st.insert(i);
9            }
10        }
11        int ans =1;
12        while(st.count(ans)){
13            ans++;
14        }
15        return ans;
16        
17    }
18};