// Last updated: 17/10/2026, 11:03:05
1class Solution {
2public:
3    int numOfStrings(vector<string>& patterns, string word) {
4        int n = patterns.size();
5        int count =0;
6        for(int i =0;i<n;i++){
7           if(word.find(patterns[i]) != string::npos){
8            count++;
9           }
10
11        } 
12        return count;
13    }
14};