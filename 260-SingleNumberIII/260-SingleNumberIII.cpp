// Last updated: 28/09/2026, 18:24:41
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(auto i : nums){
6            mp[i]++;
7        }
8        vector<int> ans;
9        for(auto it : mp){
10            if(it.second == 1){
11                ans.push_back(it.first);
12
13            }
14        }
15        return ans;
16        
17    }
18};