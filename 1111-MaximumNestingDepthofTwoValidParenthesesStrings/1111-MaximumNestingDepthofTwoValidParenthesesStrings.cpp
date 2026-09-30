// Last updated: 30/09/2026, 19:06:02
1class Solution {
2public:
3    vector<int> maxDepthAfterSplit(string seq) {
4        int d =0;
5        vector<int> ans;
6        for(char ch : seq){
7            if(ch == '('){
8                ++d;
9                ans.push_back(d%2);
10            }
11            else{
12                ans.push_back(d%2);
13                --d;
14            }
15        }
16        return ans;
17
18       
19        
20    }
21};