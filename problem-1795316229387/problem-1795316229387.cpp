// Last updated: 22/11/2026, 08:27:09
1class Solution {
2public:
3    int countDominantElements(vector<int>& nums) {
4       int n = nums.size();
5        int count = 0;
6
7        if (n == 1) return 1;
8
9        for (int i = 0; i < n; i++) {
10
11            if (i == 0) {
12                if (nums[i] >= nums[i + 1])
13                    count++;
14            }
15            else if (i == n - 1) {
16                if (nums[i] >= nums[i - 1])
17                    count++;
18            }
19            else {
20                if (2 * nums[i] >= nums[i - 1] + nums[i + 1])
21                    count++;
22            }
23        }
24
25        return count;
26        
27    }
28};