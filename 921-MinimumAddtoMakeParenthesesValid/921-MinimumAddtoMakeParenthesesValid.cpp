// Last updated: 06/10/2026, 06:47:48
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int open =0;
5        int count =0;
6    
7        for(char ch : s){
8            if(ch == '('){
9                open++;
10            }
11            else if(open ==0){
12                count++;
13                
14            }
15            else{
16                open--;
17            }
18        }
19        return open+count;
20        
21    }
22};