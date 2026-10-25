// Last updated: 25/10/2026, 08:09:47
1class Solution {
2public:
3    int solve(int n){
4        int count =0;
5        while(n>0){
6            if(n%2==1){
7                count++;
8            }
9            n = n/2;
10        }
11        return count;
12    }
13    int calculateScore(int a, int b) {
14        int s1 = solve(a);
15        int s2 = solve(b);
16        if(s1>=s2){
17            return s1*s2;
18        }
19        return s2/s1;
20        
21        
22    }
23};