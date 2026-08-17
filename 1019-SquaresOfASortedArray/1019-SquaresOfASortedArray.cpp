// Last updated: 17/08/2026, 18:31:05
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