// Last updated: 04/10/2026, 08:10:59
1class Solution {
2public:
3    int minRotations(string s) {
4
5     int ans = 0;
6
7    
8        int first = s[0] - '0';
9        ans += min(first, 10 - first);
10
11        
12        for (int i = 1; i < s.size(); i++) {
13            int a = s[i - 1] - '0';
14            int b = s[i] - '0';
15
16            int diff = abs(a - b);
17
18            ans += min(diff, 10 - diff);
19        }
20
21        return ans;
22        
23    }
24};