// Last updated: 18/10/2026, 09:12:51
1class Solution {
2public:
3    int minDeletions(vector<int>& nums) {
4        int count =0;
5        for(int i =1; i<nums.size();i++){
6            if(nums[i] == nums[i-1]){
7                count++;
8            }
9        }
10        return count;
11        
12    }
13};