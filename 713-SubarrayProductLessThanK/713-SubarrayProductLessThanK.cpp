// Last updated: 29/10/2026, 17:48:09
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        if(k <= 1){
5            return 0;
6        }
7        int left =0;
8        long long product = 1;
9        int ans =0;
10
11        for(int right =0; right< nums.size(); right++){
12            product *=nums[right];
13            while(product >= k){
14                product /= nums[left];
15                left++;
16            }
17            ans += right-left +1;
18        }
19        return ans;
20        
21    }
22};