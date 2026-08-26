// Last updated: 26/08/2026, 09:55:16
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.length() != t.length()){
5            return false;
6        }
7
8        sort(s.begin(), s.end());
9        sort(t.begin(), t.end());
10
11        return s == t;
12
13        
14    }
15};