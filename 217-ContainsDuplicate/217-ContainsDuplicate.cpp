// Last updated: 12/09/2026, 18:34:41
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> ans;
5        for(int x : nums){
6            if(ans.count(x)){
7                return true;
8            }
9            ans.insert(x);
10        }
11        return false;
12
13        
14    }
15};