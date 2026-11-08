// Last updated: 08/11/2026, 22:25:59
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int maxi =INT_MIN;
5        int maxProduct ;
6      
7        for(int i =0;i<nums.size()-1;i++){
8            for(int j =i+1;j<nums.size();j++){
9                 maxProduct =(nums[i]-1) * (nums[j]-1);
10                 maxi = max(maxi , maxProduct);
11            }
12           
13
14        }
15        return maxi;
16        
17    }
18};