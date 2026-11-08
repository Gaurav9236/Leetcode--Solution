// Last updated: 08/11/2026, 22:07:35
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int maxi =0;
5        for(int i =0; i<candies.size();i++){
6            maxi = max(maxi , candies[i]);
7        }
8
9        vector<bool> ans;
10        for(int i =0; i<candies.size();i++){
11            if(candies[i]+extraCandies >=maxi){
12                ans.push_back(true);
13            }else{
14                ans.push_back(false);
15            }
16        }
17        return ans;
18        
19    }
20};