// Last updated: 21/09/2026, 18:42:18
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        vector <int> ans;
5        for(int i = 0 ;i<nums1.size(); i++){
6            ans.push_back(nums1[i]);
7
8        }
9        for(int i = 0; i<nums2.size(); i++){
10            ans.push_back(nums2[i]);
11
12        }
13        sort(ans.begin(), ans.end());
14        int n = ans.size();
15
16        if(n % 2 == 1) {
17           return ans[n/2];
18        }
19        else {
20           return (ans[n/2 - 1] + ans[n/2]) / 2.0;
21        }
22        
23    }
24};