// Last updated: 01/09/2025, 23:58:01
class Solution {
public:
    bool isPowerOfTwo(int n) {

        for(int i =0 ; i<=30; i++){
            int ans = pow(2,i);

            if(ans == n)
            {
                return true;
            }
        }
        return false;
        
    }
};