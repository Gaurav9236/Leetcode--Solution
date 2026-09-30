// Last updated: 30/09/2026, 14:22:38
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        int n = candyType.size();
5        set<int> st;
6        for(int i : candyType){
7            st.insert(i);
8        }
9        int s = st.size();
10        return min(s, n/2);
11        
12    }
13};