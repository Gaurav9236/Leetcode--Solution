// Last updated: 31/08/2026, 18:28:31
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int maxReach = 0;
5        for(int i = 0  ; i<nums.size();i++){
6            if(i > maxReach){
7                return false;
8            }
9
10            maxReach = max(maxReach, i + nums[i]);
11            if(maxReach >= nums.size()-1){
12                return true;
13            }
14        }
15        return true;
16        
17    }
18};