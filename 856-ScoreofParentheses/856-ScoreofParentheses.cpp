// Last updated: 27/11/2026, 20:36:17
1class Solution {
2public:
3    int scoreOfParentheses(string s) {
4        stack<int> st;
5        st.push(0);
6        for(char ch : s){
7            if(ch == '('){
8                st.push(0);
9            }
10            else{
11                int inside = st.top();
12                st.pop();
13                int score;
14                if(inside == 0){
15                    score =1;
16                }
17                else{
18                    score = 2*inside;
19                }
20                st.top() += score;
21            }
22        }
23        return st.top();
24        
25    }
26};