// Last updated: 02/09/2025, 19:22:47
class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }

        int original = x;
        long long rev = 0;

        while(x!=0){
            
            int rem = x%10;
             rev = (rev*10) + rem;
            x = x/10;
        }

        return (original == rev);

        
        
    }
};