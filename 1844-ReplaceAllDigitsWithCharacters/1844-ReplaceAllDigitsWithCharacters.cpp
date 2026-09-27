// Last updated: 28/09/2026, 04:51:26
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1; i< s.length() ; i+=2){
            s[i] = s[i-1] + (s[i] - '0');
        }
        return s;
        
    }
};