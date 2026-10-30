// Last updated: 30/10/2026, 07:55:33
1class Solution {
2public:
3    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
4        stack<int> st;
5        int j = 0;
6        for(int x : pushed){
7            st.push(x);
8            while(!st.empty() && st.top() == popped[j]){
9                st.pop();
10                j++;
11            }
12
13        }
14        return st.empty();
15
16        
17        
18    }
19};