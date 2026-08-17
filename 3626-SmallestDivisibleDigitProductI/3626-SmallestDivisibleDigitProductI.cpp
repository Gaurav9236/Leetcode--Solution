// Last updated: 17/08/2026, 18:30:40
class Solution {
public:

   int digitProduct(int num) {
        int product = 1;

        while (num > 0) {
            product *= (num % 10);
            num /= 10;
        }

        return product;
    }


    int smallestNumber(int n, int t) {
         while (true) {
            if (digitProduct(n) % t == 0)
                return n;
            n++;
        }
    }
         

        
    
   
};