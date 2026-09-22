// Last updated: 22/09/2026, 10:17:23
1class Solution {
2public:
3     int firstposition(vector<int>& nums, int target){
4         int start =0;
5         int end = nums.size()-1;
6         int ans = -1;
7          while(start<=end){
8            int mid = start + (end-start)/2;
9
10            if(nums[mid] == target){
11             ans = mid;
12             end = mid-1;
13            }
14            else if(target < nums[mid]){
15                end = mid-1;
16            }
17            else{
18                start = mid+1;
19            }
20            
21        }
22        return ans;
23
24     }
25
26     int lastposition(vector<int>& nums, int target){
27        int start =0;
28         int end = nums.size()-1;
29         int ans = -1;
30          while(start<=end){
31            int mid = start + (end-start)/2;
32
33            if(nums[mid] == target){
34             ans = mid;
35             start = mid+1;
36            }
37            else if(target < nums[mid]){
38                end = mid-1;
39            }
40            else{
41                start = mid+1;
42            }
43            
44        }
45        return ans;
46
47
48     }
49
50    vector<int> searchRange(vector<int>& nums, int target) {
51       
52
53       return {firstposition(nums,target),
54               lastposition(nums,target) };
55        
56
57        
58    }
59};