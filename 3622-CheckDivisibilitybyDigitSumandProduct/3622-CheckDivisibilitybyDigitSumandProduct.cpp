// Last updated: 22/08/2026, 12:58:41
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4       int original = n;
5       int sum = 0;
6       int product = 1;
7
8       while(n!=0){
9        int rem = n%10;
10
11        sum+=rem;
12        product*=rem;
13        n = n/10;
14       }
15       return original % (sum+product) == 0;
16        
17    }
18};