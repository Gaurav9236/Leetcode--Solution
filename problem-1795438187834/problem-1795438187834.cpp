// Last updated: 23/11/2026, 18:19:47
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n = nums.size();
5        int sum =0;
6        int ans = INT_MAX;
7        int j =0;
8        for(int i =0 ;i<n; i++){
9            sum += nums[i];
10
11            while(sum>=target){
12                ans = min(ans , i-j+1);
13                sum -= nums[j];
14                j++;
15            }
16        }
17        if(ans == INT_MAX){
18            return 0;
19        }
20        return ans;
21       
22    }
23};