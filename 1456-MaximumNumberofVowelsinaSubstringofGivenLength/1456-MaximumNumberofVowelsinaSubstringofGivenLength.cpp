// Last updated: 20/10/2026, 07:54:04
1class Solution {
2public:
3    bool ischar(char ch){
4        return ch == 'a'||ch =='e' || ch == 'i'||
5               ch == 'o' || ch =='u';
6    }
7    int maxVowels(string s, int k) {
8        int n = s.length();
9        int maxi =0;
10        int count =0;
11
12        for(int i =0; i<k;i++){
13            if(ischar(s[i])){
14                count++;
15            }
16        }
17        maxi = count;
18
19        for(int i = k;i<n;i++){
20            if(ischar(s[i-k])){
21                count--;
22            }
23            if(ischar(s[i])){
24                count++;
25            }
26            maxi = max(maxi, count);
27        }
28        return maxi;
29        
30
31        
32    }
33};