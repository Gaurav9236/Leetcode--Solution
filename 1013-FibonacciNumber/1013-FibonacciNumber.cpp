// Last updated: 17/08/2026, 18:31:09
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        return fib(n-1) + fib(n-2);
        
    }
};