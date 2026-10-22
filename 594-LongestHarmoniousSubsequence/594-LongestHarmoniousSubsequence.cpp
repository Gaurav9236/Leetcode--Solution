// Last updated: 22/10/2026, 07:18:05
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        unordered_map<int , int> mp;;
5        for(int x : nums){
6            mp[x]++;
7        }
8        int ans =0; 
9        for(auto it : mp){
10            int x = it.first;
11            if(mp.count(x+1)){
12                ans = max(ans , mp[x]+mp[x+1]);
13            }
14        }
15        return ans;
16    }
17};