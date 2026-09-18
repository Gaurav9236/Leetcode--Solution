// Last updated: 18/09/2026, 21:57:36
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
14    int maxDepth(TreeNode* root) {
15        
16        if(root == NULL){
17            return 0;
18        }
19        int leftheight = maxDepth(root->left)+1;
20        int rightheight = maxDepth(root->right)+1;
21        int ans = max(leftheight,rightheight);
22        return ans;
23
24    }
25};