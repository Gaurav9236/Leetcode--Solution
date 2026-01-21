// Last updated: 21/01/2026, 13:18:41
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        
5       int start = 0, end = s.size()-1;
6       while(start<end){
7        swap(s[start++], s[end--]);
8       }
9
10
11    }
12};