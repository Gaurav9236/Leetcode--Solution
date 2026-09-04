// Last updated: 04/09/2026, 22:40:32
1class Solution {
2public:
3    bool findSubarrays(vector<int>& nums) {
4        
5        for (int i = 0; i<nums.size()-1; i++){
6
7            int sum1 = nums[i]+ nums[i+1];
8            for(int j = i+1; j< nums.size()-1;j++){
9                int sum2 = nums[j]+ nums[j+1];
10
11                if(sum1 == sum2){
12                    return true;
13                }
14
15            }
16        }
17        return false;
18        
19    }
20};