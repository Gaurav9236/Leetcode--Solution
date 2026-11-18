// Last updated: 18/11/2026, 23:21:40
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        map<int, int> mp;
5        for(int i : nums){
6            mp[i]++;
7        }
8        vector<pair<int,int>> v;
9        for(auto it : mp){
10            v.push_back({it.first , it.second});
11        }
12        sort(v.begin() , v.end() , [](auto &a , auto &b){
13            return a.second > b.second;
14        });
15
16        vector<int> ans;
17        for(int i=0; i<k ;i++){
18            ans.push_back(v[i].first);
19
20        }
21        return ans;
22
23        
24        
25        
26        
27    }
28};