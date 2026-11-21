// Last updated: 21/11/2026, 11:57:53
1class Solution {
2public:
3    int minimizedStringLength(string s) {
4        unordered_map<char , int> mp;
5        for(char ch : s){
6            mp[ch]++;
7        }
8        string ans = "";
9        for(auto it : mp){
10            ans += it.first;
11        }
12        return ans.length();
13        
14    }
15};