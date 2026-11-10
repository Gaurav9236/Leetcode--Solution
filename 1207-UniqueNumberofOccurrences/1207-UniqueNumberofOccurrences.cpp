// Last updated: 10/11/2026, 19:25:06
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int , int> mp;
5        for(int x : arr){
6            mp[x]++;
7        }
8        unordered_set<int> st;
9
10        for(auto i : mp) {
11            if(st.find(i.second) != st.end()) {
12                return false;
13            }
14
15            st.insert(i.second);
16        }
17
18        return true;
19        
20    }
21};