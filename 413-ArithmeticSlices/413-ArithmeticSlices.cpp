// Last updated: 20/10/2026, 21:37:31
1class Solution {
2public:
3    int numberOfArithmeticSlices(vector<int>& nums) {
4        int n = nums.size();
5        int count =0;
6        int ans =0;
7        
8        for(int i = 2; i<n;i++){
9            if((nums[i] - nums[i-1]) == (nums[i-1] - nums[i-2])){
10                count++;
11                ans += count;
12            }
13            else{
14                count =0;
15                
16            }
17        }
18        return ans;
19
20        
21        
22    }
23};