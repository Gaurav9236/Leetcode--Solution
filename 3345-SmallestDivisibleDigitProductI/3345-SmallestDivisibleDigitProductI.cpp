// Last updated: 07/08/2026, 11:25:46
1class Solution {
2public:
3
4   int digitProduct(int num) {
5        int product = 1;
6
7        while (num > 0) {
8            product *= (num % 10);
9            num /= 10;
10        }
11
12        return product;
13    }
14
15
16    int smallestNumber(int n, int t) {
17         while (true) {
18            if (digitProduct(n) % t == 0)
19                return n;
20            n++;
21        }
22    }
23         
24
25        
26    
27   
28};