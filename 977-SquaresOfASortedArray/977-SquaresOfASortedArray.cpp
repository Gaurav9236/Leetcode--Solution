// Last updated: 28/09/2026, 04:51:39
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &x : nums){
            x = x * x;  
        }
        sort(nums.begin(), nums.end());  
        return nums;
        
    }
};