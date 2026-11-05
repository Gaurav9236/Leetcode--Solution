// Last updated: 05/11/2026, 09:17:04
1class Solution {
2public:
3    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
4        int n1= arr1.size();
5        int n2 = arr2.size();
6        int count =0;
7      
8        for(int i =0;i<n1;i++){
9            bool valid = true;
10            for(int j =0; j<n2;j++){
11                if(abs(arr1[i]-arr2[j]) <=d){
12                   valid = false;
13                   break;
14                }
15            
16            }
17            if(valid){
18                count++;
19            }
20        }
21        return count;
22        
23    }
24};