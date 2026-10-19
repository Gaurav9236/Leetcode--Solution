// Last updated: 19/10/2026, 15:28:54
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int n = arr.size();
5        int count =0;
6        int sum =0;
7        for(int i =0; i<k;i++){
8            sum += arr[i];
9        }
10
11        if((sum/k)>=threshold){
12              count++;
13        }
14        
15        for(int i =k; i<n;i++){
16            sum -=  arr[i-k];
17            sum += arr[i];
18
19            if((sum/k)>=threshold){
20              count++;
21            }
22
23        }
24        
25
26        return count;
27
28        
29    }
30};