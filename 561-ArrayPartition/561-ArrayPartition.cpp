// Last updated: 09/02/2026, 22:32:10
1class Solution {
2public:
3    int arrayPairSum(vector<int>& nums) {
4        
5        sort(nums.begin(), nums.end());
6        int sum = 0;
7        for(int i = 0; i< nums.size(); i+=2){
8            sum+=nums[i];
9        }
10        return sum;
11    }
12};