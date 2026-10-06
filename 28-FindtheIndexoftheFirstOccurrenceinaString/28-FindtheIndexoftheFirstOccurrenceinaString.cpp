// Last updated: 06/10/2026, 20:41:46
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n = haystack.length();
5        int m = needle.length();
6
7        for(int i =0; i<n;i++){
8            if(haystack.substr(i,m) == needle){
9                return i;
10            }
11        }
12        return -1;
13        
14    }
15};