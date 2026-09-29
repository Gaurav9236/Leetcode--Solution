// Last updated: 29/09/2026, 11:26:50
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        for (int i : nums){
6            mp[i]++;
7        }
8        vector<int>ans;
9        for(auto x : mp){
10            if(x.second > 1){
11                ans.push_back(x.first);
12            }
13        }
14        return ans;
15
16        
17    }
18};