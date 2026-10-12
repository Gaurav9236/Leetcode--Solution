// Last updated: 12/10/2026, 12:11:50
1class Solution {
2public:
3    int trailingZeroes(int n) {
4        int ans =0;
5        while(n>0){
6            n = n/5;
7            ans += n;
8
9        }
10        return ans;
11        
12    }
13};