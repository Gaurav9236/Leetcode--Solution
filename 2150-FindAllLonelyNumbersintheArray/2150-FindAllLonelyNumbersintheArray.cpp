// Last updated: 31/10/2026, 22:53:11
1class Solution {
2public:
3    vector<int> findLonely(vector<int>& nums) {
4        vector<int> ans;
5        unordered_map<int , int> mp;
6        for(int x : nums){
7            mp[x]++;
8        }
9        for(int x : nums){
10            if(mp[x] == 1 && mp[x-1] == 0 && mp[x+1] ==0){
11                ans.push_back(x);
12            }
13        }
14        return ans;
15        
16
17        
18       
19        
20    }
21};