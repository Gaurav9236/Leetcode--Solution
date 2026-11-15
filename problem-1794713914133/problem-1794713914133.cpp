// Last updated: 15/11/2026, 09:08:34
1class Solution {
2public:
3    int countConsistent(vector<int>& nums) {
4        int n = nums.size();
5        long long ans =0;
6
7        for(int i =0; i<n ;i++){
8            int AND = nums[i];
9            int mini = nums[i];
10
11            for(int j =i; j<n ;j++){
12                AND &= nums[j];
13                mini = min(mini , nums[j]);
14
15                if(AND == mini){
16                    ans++;
17                }
18            }
19        }
20        return ans;
21        
22    }
23};