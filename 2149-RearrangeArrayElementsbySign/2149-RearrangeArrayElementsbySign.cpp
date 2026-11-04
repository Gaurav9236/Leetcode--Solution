// Last updated: 04/11/2026, 17:45:33
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4         int n = nums.size();
5        vector<int> ans(n);
6       
7        int pos = 0;
8        int neg =1;
9        for(int i =0;i<n ; i++){
10           if(nums[i]>0){
11            ans[pos] = nums[i];
12            pos+=2;
13           }  
14            
15           else{
16            ans[neg] = nums[i];
17            neg +=2;
18           }
19        }
20        return ans;
21        
22    }
23};