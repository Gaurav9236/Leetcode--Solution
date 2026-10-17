// Last updated: 17/10/2026, 10:44:35
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        if(n<=2){
6            return n;
7        }
8        int j =2;
9
10        for(int i =2; i<n;i++){
11            if(nums[i]!=nums[j-2]){
12                nums[j] = nums[i];
13                j++;
14            }
15
16
17        }
18        return j;
19        
20    }
21};