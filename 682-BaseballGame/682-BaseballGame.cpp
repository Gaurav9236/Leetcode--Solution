// Last updated: 16/08/2026, 09:28:57
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        stack<int> st;
5        for(int i = 0; i< operations.size(); i++){
6            string op = operations[i];
7
8            if(op == "C"){
9                st.pop();
10            }
11            else if(op == "D"){
12                int x = st.top();
13                st.push(2*x);
14            }
15            else if(op == "+"){
16                int first = st.top();
17                st.pop();
18                int second = st.top();
19                st.push(first);
20                st.push(first + second);
21
22            }
23            else{
24                st.push(stoi(op));
25            }
26
27        }
28        int sum = 0;
29        while(!st.empty()){
30            sum+=st.top();
31            st.pop();
32        }
33        return sum;
34        
35    }
36};