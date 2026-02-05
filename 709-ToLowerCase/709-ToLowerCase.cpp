// Last updated: 05/02/2026, 22:46:31
1class Solution {
2public:
3    string toLowerCase(string s) {
4        for(char &c : s){
5            if(c>='A' && c<='Z'){
6                c = c+32;
7            }
8        }
9        return s;
10        
11    }
12};