// Last updated: 31/10/2026, 08:03:11
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        // int count =0; 
5        // for(int i =0; i<nums.size();i++){
6        //     for(int j =i+1; j< nums.size();j++){
7        //         if(nums[i] == nums[j]){
8        //             count++;
9        //         }
10        //     }
11            
12        // }
13        // return count;
14         
15        sort(nums.begin(), nums.end());
16        int count =0;
17        int n = nums.size();
18        for(int i =0 ;i<n;i++){
19            int j = i+1;
20            while(j<n && nums[i] == nums[j]){
21                count++;
22                j++;
23            }
24        }
25        return count;
26    
27        
28    }
29};