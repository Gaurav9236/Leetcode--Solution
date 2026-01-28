// Last updated: 28/01/2026, 10:04:04
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int i = s.length()-1;
5        int count = 0;
6        while(i>=0 && s[i] == ' '){
7          i--;
8        }
9
10        while(i>=0 && s[i] != ' '){
11             count++;
12             i--; 
13        }
14        return count;
15          
16        
17    }
18};