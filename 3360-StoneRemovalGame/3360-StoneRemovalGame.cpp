// Last updated: 26/11/2026, 22:42:32
1class Solution {
2public:
3    bool canAliceWin(int n) {
4        int take = 10 , k=0;
5        while(n>=take){
6            n -= take;
7            take--;
8            k++;
9        }
10        return k%2 ==1;
11    }
12};