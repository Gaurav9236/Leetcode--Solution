// Last updated: 22/11/2026, 09:53:25
1class Solution {
2public:
3    bool checkString(string s) {
4        int n = s.length();
5        for(int i =1;i<n;i++){
6           if(s[i] == 'a' && s[i-1] == 'b'){
7            return false;
8           }
9
10        }
11        return true;
12    }
13};