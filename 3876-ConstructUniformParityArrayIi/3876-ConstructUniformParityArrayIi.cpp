// Last updated: 28/09/2026, 04:50:51
class Solution {
public:
    bool uniformArray(vector<int>& nums) {
         int minOdd = INT_MAX;

        for (int x : nums) {
            if (x % 2 == 1) {
                minOdd = min(minOdd, x);
            }
        }

        for (int x : nums) {
            if (x % 2 == 0 && minOdd != INT_MAX && x < minOdd) {
                return false;
            }
        }

        return true;
        
    
    }
};