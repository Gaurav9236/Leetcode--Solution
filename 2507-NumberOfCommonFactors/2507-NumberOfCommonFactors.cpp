// Last updated: 17/08/2026, 18:30:48
class Solution {
public:
    int commonFactors(int a, int b) {
        int g = gcd(a,b);
        int count = 0;

        for(int i = 1; i<=g ; i++){
            if(g%i == 0){
                count++;
            }
        }
        return count ;
        
    }
};