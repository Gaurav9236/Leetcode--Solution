// Last updated: 24/08/2026, 16:50:37
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int low = 0;
5        int high = nums.size()-1;
6        while(low<high){
7            int mid = low + (high-low)/2;
8
9            if(nums[mid]<nums[mid+1]){
10                low = mid+1;
11
12            }
13            else {
14                high = mid;
15            }
16        }
17        return low;
18
19        
20
21        
22    }
23
24};