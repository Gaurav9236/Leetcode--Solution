// Last updated: 05/10/2026, 07:04:50
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int n= nums.size();
5        vector<int> ans;
6        for(int i =0;i<n;i++){
7            if(nums[i]%2 ==0){
8                ans.push_back(nums[i]);
9            }
10        }
11        for(int i =0;i<n;i++){
12            if(nums[i]%2 !=0){
13                ans.push_back(nums[i]);
14            }
15        }
16        return ans;
17        
18    }
19};