// Last updated: 25/11/2026, 22:24:20
1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4        vector<int> prefixgcd;
5        int maxi =0;
6
7        for(int i =0 ; i< nums.size();i++){
8            maxi = max(maxi , nums[i]);
9            prefixgcd.push_back(gcd(nums[i], maxi));
10        }
11        sort(prefixgcd.begin() , prefixgcd.end());
12        int left = 0;
13        int right = prefixgcd.size()-1;
14        long long ans =0;
15
16        while(left < right){
17            ans += gcd(prefixgcd[left] , prefixgcd[right]);
18            left++ , right--;
19        }
20        return ans;
21        
22    }
23};