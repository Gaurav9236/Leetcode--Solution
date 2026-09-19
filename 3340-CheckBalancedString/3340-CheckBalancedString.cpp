// Last updated: 19/09/2026, 10:58:33
1class Solution {
2public:
3    bool isBalanced(string num) {
4        int evensum =0, oddsum = 0;
5        for(int i = 0 ;i<num.length();i+=2){
6            evensum += num[i] - '0';
7        }
8        for(int i = 1 ;i<num.length();i+=2){
9            oddsum += num[i] - '0';
10        }
11       
12
13        return evensum == oddsum;
14    }
15};