// Last updated: 10/09/2026, 18:18:58
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int j =0;
5        for(int i =0; i<nums.size(); i++){
6            if(nums[i]!=val){
7               nums[j] = nums[i];
8               j++;
9
10            }
11            
12            
13        }
14        return j;
15        
16    }
17};