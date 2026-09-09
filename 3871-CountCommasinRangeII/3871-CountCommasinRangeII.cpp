// Last updated: 09/09/2026, 16:55:09
1class Solution {
2public:
3    long long countCommas(long long n) {
4        
5        long long ans = 0;
6        for(long long i = 1000; i<=n; i*=1000){
7            ans += n-i+1;
8            
9        }
10        return ans;
11        
12    }
13    
14};