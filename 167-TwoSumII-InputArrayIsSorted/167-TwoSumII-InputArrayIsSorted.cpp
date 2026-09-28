// Last updated: 28/09/2026, 09:53:12
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int left  = 0;
5        int right = numbers.size()-1;
6
7        while(left <right){
8            int sum = numbers[left] + numbers[right];
9            if(sum == target){
10                return {left+1, right+1};
11            }
12            else if(sum<target){
13                left++;
14            }
15            else{
16                right--;
17            }
18
19
20        }
21        return {};
22        
23    }
24};