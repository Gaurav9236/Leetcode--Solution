// Last updated: 28/09/2026, 05:56:29
1class Solution {
2public:
3    int maxDepth(string s) {
4        int depth =0, ans =0;
5        for(char ch : s){
6            if(ch == '('){
7                depth++;
8                ans =  max(depth , ans);
9
10            }
11            else if(ch == ')'){
12                depth--;
13            }
14        }
15        return ans;
16
17    }
18};