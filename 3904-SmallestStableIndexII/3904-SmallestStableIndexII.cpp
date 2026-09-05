// Last updated: 05/09/2026, 08:18:58
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int> minvalue(n);
6        minvalue[n-1] = nums[n-1];
7
8        for(int i = n-2; i>=0; i--){
9            minvalue[i] = min(minvalue[i+1], nums[i]);
10        }
11
12        int maxvalue = 0;
13        for(int i =0; i<n; i++){
14            maxvalue = max(maxvalue, nums[i]);
15
16            if(maxvalue - minvalue[i] <=k){
17                return i;
18            }
19        }
20
21        return -1;
22        
23    }
24};