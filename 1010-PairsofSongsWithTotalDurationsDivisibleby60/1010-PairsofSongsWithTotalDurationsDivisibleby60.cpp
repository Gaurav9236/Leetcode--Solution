// Last updated: 31/10/2026, 00:29:03
1class Solution {
2public:
3    int numPairsDivisibleBy60(vector<int>& time) {
4        vector<int> rem(60 , 0);
5        int count =0;
6        for(int t : time){
7            int r = t%60;
8            int complement = (60-r)%60;
9            count += rem[complement];
10            rem[r]++;
11           
12        }
13        return count;
14        
15    }
16};