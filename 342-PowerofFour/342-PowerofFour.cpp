// Last updated: 03/09/2025, 19:21:48
class Solution {
public:
    bool isPowerOfFour(int n) {

        for(int i =0 ; i<=30; i++){
            long long ans = pow(4,i);

            if(ans == n)
            {
                return true;
            }
        }
        return false;
        
    }
};