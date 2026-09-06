// Last updated: 06/09/2026, 08:53:42
1class Solution {
2public:
3    int countRotations(string s, int k) {
4        int n=  s.size();
5        int ans = 0;
6        for(int i = 0; i<n; i++){
7            string rotated = s.substr(i) + s.substr(0,i);
8            int score = 0;
9
10            for(int j = 0 ; j<n-1;j++){
11                if(rotated[j] == rotated[j+1]){
12                    score++;
13                }
14            }
15            if(score == k){
16                ans++;
17            }
18        }
19        return ans;
20        
21    }
22};