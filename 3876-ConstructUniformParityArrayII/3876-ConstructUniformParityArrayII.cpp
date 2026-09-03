// Last updated: 03/09/2026, 19:44:14
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums) {
4         int minOdd = INT_MAX;
5
6        for (int x : nums) {
7            if (x % 2 == 1) {
8                minOdd = min(minOdd, x);
9            }
10        }
11
12        for (int x : nums) {
13            if (x % 2 == 0 && minOdd != INT_MAX && x < minOdd) {
14                return false;
15            }
16        }
17
18        return true;
19        
20    
21    }
22};