// Last updated: 03/02/2026, 22:04:18
1class Solution {
2public:
3    bool isUgly(int n) {
4        if (n <= 0){
5            return false;
6        }
7        for(int i : {2,3,5}){
8            while(n%i == 0)
9            n /=i;
10        }
11        return n ==1;
12        
13    }
14};