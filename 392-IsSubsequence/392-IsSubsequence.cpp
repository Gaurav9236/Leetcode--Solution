// Last updated: 10/10/2026, 15:25:36
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int i =0, j =0;
5        while(i<s.length() && j< t.length() ){
6            if(s[i] == t[j]){
7                i++;
8            }
9            j++;
10        }
11        return i == s.length();
12        
13    }
14};