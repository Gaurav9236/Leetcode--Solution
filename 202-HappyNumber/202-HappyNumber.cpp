// Last updated: 13/09/2026, 21:27:38
1class Solution {
2public:
3    int SquareSum(int n){
4        int sum = 0;
5        while(n>0){
6            int rem = n%10;
7            sum+=rem*rem;
8            n/=10;
9
10        }
11        return sum;
12    }
13
14    bool isHappy(int n) {
15        if(n==1){
16            return true;
17        }
18        if(n==4){
19            return false;
20        }
21
22        return isHappy(SquareSum(n));
23
24    }
25};