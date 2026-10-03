// Last updated: 03/10/2026, 13:10:56
1class Solution {
2public:
3    int longestValidParentheses(string s) {
4        int ans =0;
5        stack<int> st;
6        st.push(-1);
7
8        for(int i =0; i<s.length();i++){
9            if(s[i] == '('){
10                st.push(i);
11            }
12            else{
13                st.pop();
14                if(st.empty()){
15                    st.push(i);
16                }
17                else{
18                    ans = max(ans , i-st.top());
19                }
20            }
21        }
22        return ans;
23        
24        
25    }
26};