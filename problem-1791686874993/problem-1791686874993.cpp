// Last updated: 11/10/2026, 08:17:54
1class Solution {
2public:
3    bool threeFibonacciSum(int n) {
4        int a=0 ,b =1 , c =1;
5        while(a+b+c <n){
6            int next = b+c;
7            a=b;
8            b=c;
9            c = next;
10        }
11        return a+b+c ==n;
12        
13    }
14};