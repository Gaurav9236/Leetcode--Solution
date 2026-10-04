// Last updated: 04/10/2026, 14:29:15
1class Solution {
2public:
3    vector<int> sortArrayByParityII(vector<int>& nums) {
4        vector<int> ans(nums.size());
5
6        int even = 0;
7        int odd = 1;
8        for(int num : nums) {
9            if(num % 2 == 0) {
10                ans[even] = num;
11                even += 2;
12            }
13            else {
14                ans[odd] = num;
15                odd += 2;
16            }
17        }
18        return ans;
19        
20    }
21};