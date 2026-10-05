// Last updated: 05/10/2026, 14:09:31
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char,int> mp;
5        for(int i : s){
6            mp[i]++;
7        }
8        for(int i =0; i<s.length();i++){
9            if(mp[s[i]] ==1){
10                return i;
11            }
12        }
13        return -1;
14     
15        
16    }
17};