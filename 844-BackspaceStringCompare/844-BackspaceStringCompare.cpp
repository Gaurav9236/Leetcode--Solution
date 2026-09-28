// Last updated: 28/09/2026, 09:36:45
1class Solution {
2public:
3    bool backspaceCompare(string s, string t) {
4       string ans1, ans2;
5       for(char ch : s){
6        if(ch != '#'){
7           
8            ans1.push_back(ch);
9        }
10        else if( !ans1.empty()){
11            ans1.pop_back();
12        }
13       }
14       for(char ch : t){
15        if(ch != '#'){
16           
17            ans2.push_back(ch);
18
19        }
20        else if(!ans2.empty()){
21             ans2.pop_back();
22        }
23       }
24       return ans1 == ans2;
25
26       
27
28      
29
30        
31    }
32};