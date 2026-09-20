// Last updated: 20/09/2026, 08:11:10
1class Solution {
2public:
3    int reverseDegree(string s) {
4        int n = s.length();
5        int sum = 0;
6        for(int i = 0; i<n;i++){
7            sum += ('z' - s[i] + 1) *(i+1);
8            
9        }
10        
11        return sum;
12    }
13};