// Last updated: 23/08/2026, 19:40:36
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n = nums.size()-1;
5        for(int i = 0; i<n;i+=2){
6            if(nums[i] != nums[i+1]){
7                return nums[i];
8            }
9            
10        }
11        return nums[n];
12        
13    }
14};