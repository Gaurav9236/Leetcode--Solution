// Last updated: 24/10/2026, 20:36:09
1class Solution {
2public:
3    int peakValleyDifference(vector<int>& nums) {
4        int n = nums.size();
5        int peak =0;
6        int valley =0;
7        for(int i =1;i<n-1;i++){
8            if((nums[i]>nums[i-1]) && (nums[i]>nums[i+1])){
9                peak += nums[i];
10            }
11        }
12        for(int i =1;i<n-1;i++){
13            if((nums[i]<nums[i-1]) && (nums[i]<nums[i+1])){
14                valley += nums[i];
15            }
16        }
17        return peak-valley;
18        
19        
20    }
21};