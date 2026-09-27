// Last updated: 28/09/2026, 04:52:33
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        
    }
};