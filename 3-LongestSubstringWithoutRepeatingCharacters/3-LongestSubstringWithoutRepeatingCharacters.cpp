// Last updated: 21/10/2026, 15:54:08
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        int ans =0;
6        int left =0;
7        for(int right =0; right < s.size(); right++){
8            while(st.count(s[right])){
9                st.erase(s[left]);
10                left++;
11            }
12            st.insert(s[right]);
13            ans = max(ans , right-left+1);
14
15        }
16        return ans;
17        
18    }
19};