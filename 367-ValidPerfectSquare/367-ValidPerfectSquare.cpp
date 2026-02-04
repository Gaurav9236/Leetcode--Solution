// Last updated: 04/02/2026, 21:07:39
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long left = 1 , right = num;
5        while(left<=right){
6            long long mid = left + (right-left)/2;
7            long long sq = mid *mid;
8
9            if(sq == num){
10                return true;
11            }else if(sq<num){
12                left = mid+1;
13            }else{
14                right = mid-1;
15            }
16
17            
18        }
19        return false;
20
21
22    }
23};