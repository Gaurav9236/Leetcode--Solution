// Last updated: 20/10/2026, 10:03:01
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n = nums.size();
5        int sum =0;
6        for(int i =0; i<k;i++){
7            sum += nums[i];
8
9        }
10        int maxsum = sum;
11
12        for(int i = k ; i<n;i++){
13            sum = sum - nums[i-k] + nums[i];
14            maxsum = max(maxsum , sum);
15        }
16        return (double)maxsum/k;
17
18        
19    }
20};