// Last updated: 17/08/2026, 18:30:42
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1; i< s.length() ; i+=2){
            s[i] = s[i-1] + (s[i] - '0');
        }
        return s;
        
    }
};