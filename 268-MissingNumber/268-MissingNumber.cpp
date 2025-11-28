// Last updated: 29/11/2025, 00:08:48
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int sum = 0;
6        for(int i=0;i<=n;i++){
7            sum +=i;
8        }
9        int missing = 0;
10        for(int i =0;i<n;i++){
11            missing = missing + nums[i];
12        }
13        return sum-missing;
14    }
15        
16    
17};