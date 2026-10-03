// Last updated: 03/10/2026, 10:17:14
1class Solution {
2public:
3    void Solve(vector<int>& nums ,int index , vector<int> &current , vector<vector<int>> &ans){
4
5        //base case
6        if(index >= nums.size()){
7            ans.push_back(current);
8            return ;
9        }
10
11        //phle include ka case
12        current.push_back(nums[index]);
13        Solve(nums, index+1, current , ans);
14        current.pop_back();
15
16        //exclude 
17        Solve(nums , index+1 , current , ans);
18    }
19   
20    vector<vector<int>> subsets(vector<int>& nums) {
21        vector<vector<int>> ans;
22        vector<int> current;
23        Solve(nums, 0,current , ans);
24        return ans;
25
26        
27    }
28};