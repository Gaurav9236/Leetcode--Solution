// Last updated: 07/09/2025, 10:06:07
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;
        for(int val : nums) {
            ans = ans^val;
        }
        return ans;
        
    }
};