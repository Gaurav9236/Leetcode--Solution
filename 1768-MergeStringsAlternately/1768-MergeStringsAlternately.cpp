// Last updated: 06/10/2026, 18:24:27
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string ans;
5        int n = max(word1.size(), word2.size());
6
7        for (int i = 0; i < n; i++) {
8            if (i < word1.size())
9                ans += word1[i];
10
11            if (i < word2.size())
12                ans += word2[i];
13        }
14        return ans;
15        
16    }
17};