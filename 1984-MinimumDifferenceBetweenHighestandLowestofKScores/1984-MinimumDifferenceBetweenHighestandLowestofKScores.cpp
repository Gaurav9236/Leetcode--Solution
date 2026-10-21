// Last updated: 21/10/2026, 14:12:34
1class Solution {
2public:
3    int minimumDifference(vector<int>& nums, int k) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6        int ans = INT_MAX;
7        for(int i =0; i<=n-k;i++){
8            int diff = nums[i+k-1] - nums[i];
9            ans = min(ans , diff);
10
11        }
12        return ans;
13        
14    }
15};