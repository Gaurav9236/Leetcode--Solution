// Last updated: 28/11/2026, 21:09:47
1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4       sort(costs.begin() , costs.end());
5
6       int count =0;
7       for(int i =0 ; i<costs.size(); i++){
8        if(costs[i]<= coins){
9            coins -= costs[i];
10            count++;
11        }
12        else{
13            break;
14        }
15       } 
16       return count;
17        
18    }
19};