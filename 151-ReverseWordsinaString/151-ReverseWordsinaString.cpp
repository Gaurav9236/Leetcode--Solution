// Last updated: 30/01/2026, 17:54:53
1class Solution {
2public:
3    string reverseWords(string s) {
4        
5        int n = s.length();
6        string ans = "";
7
8        reverse(s.begin(), s.end());
9        for(int i = 0; i<n ; i++){
10            string word = "";
11            while(i<n && s[i] != ' '){
12                word += s[i];
13                i++;
14            }
15            reverse(word.begin() , word.end());
16            if (word.length() > 0){
17                ans += ' ' + word;
18            }
19
20        }
21        return ans.substr(1);
22
23    }
24};