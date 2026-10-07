// Last updated: 07/10/2026, 18:11:20
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans;
6        for(int i =0; i<n;i++){
7            ans.push_back(nums[i]);
8            
9        }
10        for(int i =0; i<n;i++){
11            ans.push_back(nums[i]);
12            
13        }
14        return ans;
15        
16    }
17};