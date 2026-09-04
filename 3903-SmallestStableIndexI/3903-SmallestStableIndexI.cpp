// Last updated: 04/09/2026, 10:54:17
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        for(int i = 0; i<n;i++){
7            int leftmax = INT_MIN;
8            int rightmin = INT_MAX;
9
10            for(int j =0 ; j<=i; j++){
11                leftmax = max(leftmax , nums[j]);
12            }
13
14            for(int j = i ;j<n; j++){
15                rightmin = min(rightmin , nums[j]);
16            }
17
18            if(leftmax-rightmin <= k){
19                return i;
20            }
21        }
22        return -1;
23
24
25        
26        
27    }
28};