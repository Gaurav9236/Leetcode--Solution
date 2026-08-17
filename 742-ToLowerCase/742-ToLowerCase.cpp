// Last updated: 17/08/2026, 18:31:30
class Solution {
public:
    string toLowerCase(string s) {
        for(char &c : s){
            if(c>='A' && c<='Z'){
                c = c+32;
            }
        }
        return s;
        
    }
};