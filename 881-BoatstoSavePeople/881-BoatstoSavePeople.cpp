// Last updated: 15/10/2026, 14:49:43
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5
6        int i = 0;
7        int j = people.size() - 1;
8        int ans = 0;
9
10        while (i <= j) {
11            if (people[i] + people[j] <= limit) {
12                i++;
13            }
14            j--;
15            ans++;
16        }
17
18        return ans;
19       
20        
21        
22    }
23};