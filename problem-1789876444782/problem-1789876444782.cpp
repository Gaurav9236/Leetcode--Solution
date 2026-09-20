// Last updated: 20/09/2026, 09:24:04
1class Solution {
2public:
3    int countIntersectingIntervals(vector<vector<int>>& intervals) {
4
5         int count = 0;
6        int n = intervals.size();
7
8        for (int i = 0; i < n; i++) {
9            for (int j = i + 1; j < n; j++) {
10
11                int start1 = intervals[i][0];
12                int end1 = intervals[i][1];
13
14                int start2 = intervals[j][0];
15                int end2 = intervals[j][1];
16
17                
18                if (start1 <= end2 && start2 <= end1) {
19                    count++;
20                }
21            }
22        }
23
24        return count;
25        
26    }
27};