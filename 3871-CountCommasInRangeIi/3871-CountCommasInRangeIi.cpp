// Last updated: 28/09/2026, 04:50:53
class Solution {
public:
    long long countCommas(long long n) {
        
        long long ans = 0;
        for(long long i = 1000; i<=n; i*=1000){
            ans += n-i+1;
            
        }
        return ans;
        
    }
    
};