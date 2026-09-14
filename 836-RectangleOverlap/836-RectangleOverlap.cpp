// Last updated: 14/09/2026, 20:50:38
1class Solution {
2public:
3    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
4        if (rec1[2] <= rec2[0] || rec2[2] <= rec1[0])
5            return false;
6        
7        if (rec1[3] <= rec2[1] || rec2[3] <= rec1[1])
8            return false;
9        
10        return true;
11        
12    }
13};