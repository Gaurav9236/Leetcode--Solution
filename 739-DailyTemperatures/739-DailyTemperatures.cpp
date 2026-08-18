// Last updated: 18/08/2026, 21:47:36
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4      
5            int n = temperatures.size();
6            vector<int> ans(n,0);
7            stack<int> st;
8            for(int i= 0;i<n;i++){
9                while(!st.empty() && temperatures[i] > temperatures[st.top()]){
10                    int index = st.top();
11                    st.pop();
12
13                    ans[index] = i-index;
14                }
15                st.push(i);
16            }
17            return ans;
18            
19        
20        
21    }
22};