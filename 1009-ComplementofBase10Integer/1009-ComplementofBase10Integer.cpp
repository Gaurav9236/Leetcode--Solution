// Last updated: 31/08/2025, 23:55:37
class Solution {
public:
    int bitwiseComplement(int n) {

        int m = n;
        int mask = 0;

        if(n == 0)
        return 1;

        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;

        }

        int ans = (~n) & mask;

        return ans;
        
    }
};