// Last updated: 06/08/2026, 10:26:46
1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4         while (true) {
5            int x = n, product = 1;
6
7            while (x > 0) {
8                product *= x % 10;
9                x /= 10;
10            }
11
12            if (product % t == 0)
13                return n;
14
15            n++;
16        }
17
18        
19    }
20   
21};