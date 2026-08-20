// Last updated: 20/08/2026, 21:12:08
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4      int low = 0;
5      int high = nums.size()-1;
6      while(low<=high){
7          int mid = low + (high - low) / 2;
8
9          if(nums[mid] == target){
10            return mid;
11          }
12          else if(nums[mid]<target){
13            low = mid+1;
14          }
15          else{
16            high = mid-1;
17          }
18      }
19      return low;
20        
21        
22    }
23};