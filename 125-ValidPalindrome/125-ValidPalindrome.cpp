// Last updated: 01/09/2026, 18:22:19
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string temp = "";
5        for(char ch : s){
6            if(isalnum(ch)){
7                temp+=tolower(ch);
8            }
9        }
10        string rev = temp;
11        reverse(rev.begin(), rev.end());
12
13        return temp==rev;
14 
15        
16    }
17};