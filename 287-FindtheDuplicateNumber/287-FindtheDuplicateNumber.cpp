// Last updated: 29/09/2026, 06:41:56
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(int i : nums){
6            mp[i]++;
7        }
8        for(auto i : mp){
9            if(i.second > 1){
10                return i.first;
11            }
12        }
13        return 0;
14        
15    }
16};