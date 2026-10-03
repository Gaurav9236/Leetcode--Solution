// Last updated: 03/10/2026, 10:57:28
1class Solution {
2public:
3void Solve(vector<int>& nums ,int index, vector<int> &current, vector<vector<int>> &ans ){
4
5    if(index >= nums.size()){
6        ans.push_back(current);
7        return;
8    }
9
10    //include
11    current.push_back(nums[index]);
12    Solve(nums , index+1 , current, ans);
13    current.pop_back();
14
15    // exclude
16    while(index+1 < nums.size() && nums[index] == nums[index+1]){
17        index++;
18    }
19
20    Solve(nums , index+1 , current , ans);
21}
22    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
23        
24        // sbse phle hme nums ko sort krna hai taki sare duplicates ek sath aa jaye
25        sort(nums.begin(), nums.end());
26        vector<vector<int>> ans;
27        vector<int> current;
28        Solve(nums , 0 , current , ans);
29        return ans;
30        
31    }
32};