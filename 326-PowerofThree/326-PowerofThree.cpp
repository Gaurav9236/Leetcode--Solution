// Last updated: 03/09/2025, 21:31:09
class Solution {
public:
    bool isPowerOfThree(int n) {

        
        for(int i =0 ; i<=30; i++){
            long long ans = pow(3,i);

            if(ans == n)
            {
                return true;
            }
        }
        return false;
        
    }
};
        