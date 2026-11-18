// Last updated: 18/11/2026, 18:32:37
1class Solution {
2public:
3    int minChanges(string s) {
4        int changes =0;
5        for(int i =0; i< s.length();i+=2){
6            if(s[i] != s[i+1]){
7                changes++;
8
9            }
10        }
11        return changes;
12       
13 
14    }
15};