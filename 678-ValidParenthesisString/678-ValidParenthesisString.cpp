// Last updated: 04/10/2026, 14:04:05
1class Solution {
2public:
3    bool checkValidString(string s) {
4        int low = 0;
5        int high = 0;
6
7        for (char c : s) {
8
9            if (c == '(') {
10                low++;
11                high++;
12            }
13
14            else if (c == ')') {
15                low--;
16                high--;
17            }
18            else { 
19                low--; 
20                high++;  
21            }
22
23            if (high < 0)
24                return false;
25
26            if (low < 0)
27                low = 0;
28        }
29
30        return low == 0;
31        
32    }
33};