// Last updated: 26/10/2026, 22:02:48
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    unordered_set<int> st;
15    bool findTarget(TreeNode* root, int k) {
16        if (root == NULL) {
17            return false;
18        }
19
20        int need = k - root->val;
21
22        if(st.count(need)) {
23            return true;
24        }
25
26        st.insert(root->val);
27
28        return findTarget(root->left, k) ||
29               findTarget(root->right, k);
30        
31    }
32};