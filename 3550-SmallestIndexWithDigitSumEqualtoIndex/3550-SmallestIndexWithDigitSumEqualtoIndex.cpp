// Last updated: 24/09/2026, 05:49:11
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4         for(int i=0; i<nums.size();i++){
5            int sum = 0;
6            while(nums[i]!=0){
7                int rem = nums[i]%10;
8                sum += rem;
9                nums[i]/=10;
10            }
11            if(sum == i){
12                return i;
13            }
14            
15            
16        }
17        return -1;
18        
19       
20        
21    }
22};