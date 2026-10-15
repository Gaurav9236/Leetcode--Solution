// Last updated: 15/10/2026, 16:51:58
1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4        int left = 0;
5        int right = arr.size() - 1;
6
7        while (left < right) {
8            int mid = left + (right - left) / 2;
9
10            if (arr[mid] < arr[mid + 1]) {
11                left = mid + 1;
12            }
13            else {
14                right = mid;
15            }
16        }
17
18        return left;
19       
20        
21    }
22};