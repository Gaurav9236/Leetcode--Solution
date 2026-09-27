// Last updated: 28/09/2026, 04:50:41
class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {

         int count = 0;
        int n = intervals.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int start1 = intervals[i][0];
                int end1 = intervals[i][1];

                int start2 = intervals[j][0];
                int end2 = intervals[j][1];

                
                if (start1 <= end2 && start2 <= end1) {
                    count++;
                }
            }
        }

        return count;
        
    }
};