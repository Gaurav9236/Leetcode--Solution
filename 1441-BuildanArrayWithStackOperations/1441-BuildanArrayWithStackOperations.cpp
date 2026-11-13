// Last updated: 13/11/2026, 21:30:18
1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector <string> ans;
5        int curr =1;
6        for(int x : target){
7            while(curr < x){
8                ans.push_back("Push");
9                ans.push_back("Pop");
10                curr++;
11            }
12            ans.push_back("Push");
13            curr++;
14        }
15        return ans;
16        
17    }
18};