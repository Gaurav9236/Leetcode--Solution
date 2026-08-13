// Last updated: 13/08/2026, 17:12:52
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i = 0;
5        for(int j = 1; j<nums.size(); j++){
6            if(nums[j] != nums[i]){
7                i++;
8                nums[i] = nums[j];
9            }
10        }
11        return i+1;
12        
13    }
14};