// Last updated: 02/10/2026, 09:47:40
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> mp;
5        for(int i : nums1){
6            mp[i]++;
7        }
8        vector<int> ans;
9        for(int i :nums2){
10            if(mp[i]>0){
11                ans.push_back(i);
12                mp[i]--;
13            }
14        }
15        return ans;
16        
17    }
18};