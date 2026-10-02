// Last updated: 02/10/2026, 08:58:50
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(auto i : nums){
6            mp[i]++;
7        }
8        vector<int> ans;
9        for(auto it : mp){
10            if(it.second > nums.size()/3){
11                ans.push_back(it.first);
12            }
13        }
14        return ans;
15        
16    }
17};