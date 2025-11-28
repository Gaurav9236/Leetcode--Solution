// Last updated: 28/11/2025, 23:37:38
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j = nums.size()-1;
5        for(int i=0; i<j;i++){
6            if(nums[i]==0){
7                swap(nums[i],nums[i+1]);
8            }
9            for(int k=0; k<j;k++){
10                if(nums[k]==0){
11                    swap(nums[k],nums[k+1]);
12                }
13            }
14        }
15
16        
17    }
18};