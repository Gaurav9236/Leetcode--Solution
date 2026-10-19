// Last updated: 19/10/2026, 09:56:19
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        
5        sort(nums.begin() , nums.end());
6        int count =0;
7        for(int i =1; i<nums.size(); i++){
8            if(nums[i]<=nums[i-1]){
9                int newvalue = nums[i-1]+1;
10                count  = count + newvalue - nums[i];
11                nums[i] = newvalue;
12            }
13            
14        }
15        return count;
16    }
17};