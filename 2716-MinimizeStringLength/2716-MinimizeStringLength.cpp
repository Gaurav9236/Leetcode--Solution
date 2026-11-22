// Last updated: 22/11/2026, 09:19:51
1class Solution {
2public:
3    int minimizedStringLength(string s) {
4        unordered_map<char , int> mp;
5        for(char ch : s){
6            mp[ch]++;
7        }
8        return mp.size();
9        
10    }
11};