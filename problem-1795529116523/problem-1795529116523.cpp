// Last updated: 24/11/2026, 19:35:16
1class Solution {
2public:
3    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
4        
5        int i = 0, j = 0;
6        int maxi = 0;
7
8        while(i < nums1.size() && j < nums2.size()) {
9
10            if(nums1[i] <= nums2[j]) {
11                maxi = max(maxi, j-i);
12                j++;
13            }
14            else {
15                i++;
16            }
17
18            if(j < i) {
19                j = i;
20            }
21        }
22
23        return maxi;
24        
25    }
26};