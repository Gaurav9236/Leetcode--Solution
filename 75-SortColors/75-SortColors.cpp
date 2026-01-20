// Last updated: 20/01/2026, 15:06:24
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4
5        int n = nums.size();
6        int count0 = 0 , count1 = 0 , count2 = 0;
7        for(int i=0; i<n;i++){
8            if(nums[i] == 0) count0++;
9            else if(nums[i] == 1) count1++;
10            else count2++;
11        }
12
13        int index = 0;
14        for (int i=0;i<count0;i++){
15            nums[index++] = 0;
16        }
17        for (int i=0;i<count1;i++){
18            nums[index++] = 1;
19        }
20        for (int i=0;i<count2;i++){
21            nums[index++] = 2;
22        }
23
24        
25        
26    }
27};