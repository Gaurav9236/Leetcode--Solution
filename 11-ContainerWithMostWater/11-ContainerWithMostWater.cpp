// Last updated: 13/10/2026, 20:49:20
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left =0;
5        int right =height.size()-1;
6        int ans =0;
7        while(left<right){
8            int h = min(height[left] , height[right]);
9            ans = max(ans , h*(right-left));
10            if(height[left] < height[right]){
11                left++;
12            }
13            else{
14                right--;
15            }
16        }
17        return ans;
18
19        
20    }
21};