// Last updated: 27/11/2025, 23:57:50
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