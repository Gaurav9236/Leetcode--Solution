// Last updated: 08/10/2026, 08:46:13
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string ans = "";
5        int count =0;
6        for(char ch : s){
7            if(ch == '('){
8                if(count>0){
9                    ans +=ch;
10                }
11                count++;
12                
13            }
14            else{
15                count--;
16               if(count >0){
17                ans +=ch;
18               } 
19                 
20            } 
21        }
22        return ans;
23    
24        
25    }
26};