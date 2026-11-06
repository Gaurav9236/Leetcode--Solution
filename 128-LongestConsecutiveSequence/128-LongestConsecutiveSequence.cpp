// Last updated: 06/11/2026, 18:53:04
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        unordered_set <int> st(nums.begin(), nums.end());
5        int maxi =0;
6        for(int num : st){
7            if(st.find(num-1) == st.end()){
8                int count =1;
9                int curr = num;
10                while(st.find(curr+1) != st.end()){
11                    count++;
12                    curr++;
13                }
14                maxi = max(maxi,count);
15
16            }
17        }   
18        
19        return maxi;
20       
21        
22    }
23};