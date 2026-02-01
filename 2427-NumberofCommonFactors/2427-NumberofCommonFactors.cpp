// Last updated: 01/02/2026, 13:07:22
1class Solution {
2public:
3    int commonFactors(int a, int b) {
4        int g = gcd(a,b);
5        int count = 0;
6
7        for(int i = 1; i<=g ; i++){
8            if(g%i == 0){
9                count++;
10            }
11        }
12        return count ;
13        
14    }
15};