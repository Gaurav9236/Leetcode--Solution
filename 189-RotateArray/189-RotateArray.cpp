// Last updated: 27/11/2025, 23:57:55
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
        
        reverse(nums.begin(), nums.end());
        
        reverse(nums.begin(), nums.begin() + k);
        
        reverse(nums.begin() + k, nums.end());
    }
    
};