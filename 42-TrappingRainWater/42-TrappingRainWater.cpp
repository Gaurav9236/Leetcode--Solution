// Last updated: 14/10/2026, 21:21:13
1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        vector<int> leftmax(n,0);
6        vector<int> rightmax(n,0);
7
8        leftmax[0] = height[0];
9        rightmax[n-1] = height[n-1];
10
11        for(int i =1; i<n;i++){
12            leftmax[i] = max(leftmax[i-1], height[i]);
13        }
14        for(int i = n-2; i>=0;i--){
15            rightmax[i] = max(rightmax[i+1], height[i]);
16        }
17        int ans = 0;
18        for(int i =0; i<n;i++){
19            ans += min(leftmax[i], rightmax[i]) -height[i];
20        }
21        return ans;
22        
23    }
24};