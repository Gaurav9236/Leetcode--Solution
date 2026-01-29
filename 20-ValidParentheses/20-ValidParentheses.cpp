// Last updated: 29/01/2026, 13:37:21
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char>st;
5        for(char ch : s){
6            if(ch == '(' || ch == '[' || ch == '{'){
7                st.push(ch);
8            }
9            else if(ch == ')' || ch == ']' || ch == '}'){
10                if(st.empty()) return false;
11                char top = st.top();
12                st.pop();
13
14                if ((ch == ')' && top != '(') ||(ch == '}' && top != '{') ||(ch == ']' && top != '[')) {
15                return false;
16             }
17            }
18        }
19        return st.empty();
20        
21    }
22};