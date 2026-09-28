// Last updated: 28/09/2026, 09:22:20
1class Solution {
2public:
3    string removeStars(string s) {
4       string ans;
5       for(char ch : s){
6        if(ch == '*'){
7            ans.pop_back();
8        }
9        else{
10            ans.push_back(ch);
11        }
12       }
13       return ans;
14        
15    }
16};