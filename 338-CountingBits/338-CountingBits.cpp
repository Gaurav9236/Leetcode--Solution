// Last updated: 09/10/2026, 22:23:50
1class Solution {
2public:
3    vector<int> countBits(int n) {
4        vector<int> ans(n+1 ,0);
5        for(int i =0; i<=n;i++){
6            if(i%2 ==0){
7                ans[i] = ans[i/2];
8            }
9            else{
10                ans[i] = ans[i/2]+1;
11            }
12        }
13        return ans;
14
15        
16    }
17};