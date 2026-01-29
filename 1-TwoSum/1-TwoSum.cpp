// Last updated: 29/01/2026, 16:15:48
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) { 
4        for(int i = 0; i<=nums.size()-1 ; i++){
5            for(int j = i+1 ; j<=nums.size()-1; j++){
6                if(nums[i] + nums[j] == target){
7                    return {i,j};
8                }
9            }
10        }
11        
12       return {};
13     
14    }  
15};