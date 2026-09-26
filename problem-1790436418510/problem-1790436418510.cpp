// Last updated: 26/09/2026, 20:56:58
1class Solution {
2public:
3    int minQueenMoves(vector<int>& source, vector<int>& target) {
4        int sr = source[0];
5        int sc = source[1];
6
7        int tr = target[0];
8        int tc = target[1];
9
10         if (sr == tr && sc == tc) {
11            return 0;
12        }
13
14        if (sr == tr) {
15            return 1;
16        }
17
18        if (sc == tc) {
19            return 1;
20        }
21
22        if (abs(sr - tr) == abs(sc - tc)) {
23            return 1;
24        }
25
26        return 2;
27        
28    }
29};