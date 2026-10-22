// Last updated: 22/10/2026, 22:54:44
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4       vector< vector<int>>ans;
5       int n = nums.size();
6       sort(nums.begin() , nums.end());
7
8       for(int i = 0 ; i<n-2;i++){
9        if(i>0 && nums[i] == nums[i-1]){
10            continue;
11        }
12        int left = i+1;
13        int right = n-1;
14        while(left<right){
15            int sum = nums[i]+ nums[left]+ nums[right];
16
17            if(sum>0){
18                right--;
19            }
20            else if(sum<0){
21                left++;
22            }
23            else{
24                ans.push_back({nums[i],nums[left],nums[right]});
25                left++;
26                right--;
27                while(left<right && nums[left] == nums[left-1]){
28                    left++;
29                }
30            }
31            
32
33         
34        }
35       
36
37        
38       }
39       return ans;
40    
41         
42    }
43};