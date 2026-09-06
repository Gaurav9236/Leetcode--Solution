// Last updated: 06/09/2026, 16:34:43
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        int n = nums.size();
5        bool inc = true;
6        bool dec = true;
7        for(int i =0;i<n-1; i++ ){
8
9           if(nums[i+1]<nums[i]){
10            inc =  false;
11           }
12           if(nums[i+1]>nums[i]){
13            dec =  false;
14           }
15           
16            
17        }
18        return inc || dec;
19        
20    }
21};