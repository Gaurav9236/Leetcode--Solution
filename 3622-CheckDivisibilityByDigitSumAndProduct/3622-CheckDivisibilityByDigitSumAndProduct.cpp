// Last updated: 28/09/2026, 04:51:03
class Solution {
public:
    bool checkDivisibility(int n) {
       int original = n;
       int sum = 0;
       int product = 1;

       while(n!=0){
        int rem = n%10;

        sum+=rem;
        product*=rem;
        n = n/10;
       }
       return original % (sum+product) == 0;
        
    }
};