// Last updated: 16/11/2026, 23:28:57
1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        deque<int> dq;
5        vector<int> ans;
6
7        for(int i =0; i<k ; i++){
8            while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
9                dq.pop_back();
10            }
11            dq.push_back(i);
12        }
13
14        for(int i =k;i<nums.size() ; i++){
15            ans.push_back(nums[dq.front()]);
16
17            //remove not part of curr window
18            while(dq.size() > 0 && dq.front() <= i-k){
19                dq.pop_front();
20            }
21            //remove smaller values
22            while(dq.size() >0 && nums[dq.back()] <= nums[i]){
23                dq.pop_back();
24            }
25            dq.push_back(i);
26        }
27        ans.push_back(nums[dq.front()]);
28        return ans;
29        
30       
31    }
32};