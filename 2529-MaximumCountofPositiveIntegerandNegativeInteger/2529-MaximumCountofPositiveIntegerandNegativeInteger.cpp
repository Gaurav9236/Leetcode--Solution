// Last updated: 15/08/2026, 10:51:11
1class Solution {
2public:
3    int maximumCount(vector<int>& nums) {
4
5        int positive = 0;
6        int negative = 0;
7
8        for(int i =0; i<nums.size() ; i++){
9            if(nums[i]<0){
10                negative++;
11            }
12            if(nums[i]>0){
13                positive++;
14            }
15        }
16        return max(negative, positive);
17        
18    }
19};