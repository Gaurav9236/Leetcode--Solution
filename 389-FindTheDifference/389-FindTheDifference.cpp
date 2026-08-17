// Last updated: 17/08/2026, 18:31:42
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(char ch : s){
            ans ^= ch;
        }
        for(char ch : t){
            ans ^= ch;
        }
        return ans;
        
    }
};