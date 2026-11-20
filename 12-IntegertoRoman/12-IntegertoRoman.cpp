// Last updated: 20/11/2026, 17:47:33
1class Solution {
2public:
3    string intToRoman(int num) {
4        vector<int> values {
5            1000 , 900 , 500 , 400 , 100 , 90, 50 , 40, 10,9 , 5 , 4, 1
6        };
7        vector<string> symbols = {
8            "M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I"
9        };
10        string ans = "";
11        for(int i =0 ; i<values.size(); i++){
12            while(num >= values[i]){
13                ans += symbols[i];
14                num -= values[i];
15            }
16        }
17        return ans;
18
19        
20    }
21};