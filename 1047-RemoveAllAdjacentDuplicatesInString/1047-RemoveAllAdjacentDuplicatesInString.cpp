// Last updated: 29/01/2026, 14:44:58
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string res = "";
5        for (char ch : s){
6            if(!res.empty() && res.back() == ch)
7                res.pop_back();
8
9             else 
10               res.push_back(ch);   
11        }
12        return res;
13        
14    }
15};