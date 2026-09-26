// Last updated: 26/09/2026, 13:21:41
1class Solution {
2public:
3    string evaluate(string s, vector<vector<string>>& knowledge) {
4        unordered_map<string , string> mp;
5
6        for(auto x : knowledge){
7            mp[x[0]] = x[1];
8        }
9        string ans = "";
10
11        for(int i =0; i<s.length();i++){
12            if(s[i] == '('){
13                string key = "";
14                i++;
15
16                while(s[i] != ')'){
17                    key+=s[i];
18                    i++;
19                }
20                if(mp.find(key) != mp.end()){
21                    ans += mp[key];
22                }
23                else{
24                    ans += "?";
25                }
26            }
27            else{
28                ans += s[i];
29            }
30        }
31        return ans;
32        
33    }
34};