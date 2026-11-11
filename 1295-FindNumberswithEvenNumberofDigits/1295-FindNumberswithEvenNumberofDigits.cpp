// Last updated: 11/11/2026, 19:33:28
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int count = 0;
5        for(int i = 0; i < nums.size(); i++) {
6            int num = nums[i];
7            int digit = 0;
8            while(num > 0) {
9                digit++;
10                num = num / 10;
11            }
12            if(digit % 2 == 0) {
13                count++;
14            }
15        }
16
17        return count;
18        
19    }
20};