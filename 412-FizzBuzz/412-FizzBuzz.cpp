// Last updated: 02/02/2026, 18:48:34
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> ans;
5
6        for(int i = 1; i<=n ; i++){
7             if(i%15 == 0){
8                ans.push_back("FizzBuzz");
9             }
10             else if (i%3 == 0){
11                ans.push_back("Fizz");
12             }
13             else if (i%5 == 0){
14                ans.push_back("Buzz");
15             }
16             else{
17                ans.push_back(to_string(i));
18             }
19
20        }
21        return ans;
22        
23    }
24};