// Last updated: 30/09/2026, 11:27:22
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0;
5        int maxcount = 0;
6        int n = nums.size();
7        for(int i= 0;i<n;i++){
8            if(nums[i]==1){
9                count++;
10                maxcount = max(maxcount,count);
11            
12            }
13            else{
14                count = 0;
15            }
16        }
17        return maxcount;
18        
19    }
20};