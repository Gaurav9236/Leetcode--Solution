// Last updated: 01/10/2026, 22:13:22
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int , int> mp;
5        stack<int> st;
6        for(int i =nums2.size()-1;i>=0;i--){
7            while(!st.empty() && st.top() <= nums2[i]){
8                st.pop();
9            }
10            if(st.empty()){
11                mp[nums2[i]] = -1;
12            }
13            else{
14                mp[nums2[i]] = st.top();
15            }
16            st.push(nums2[i]);
17        }
18        vector<int> ans;
19        for(int x : nums1){
20            ans.push_back(mp[x]);
21        }
22        return ans;
23       
24        
25    }
26};