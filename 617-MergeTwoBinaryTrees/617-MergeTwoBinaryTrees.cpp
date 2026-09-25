// Last updated: 25/09/2026, 21:32:32
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
14    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
15        if(root1 == NULL){
16            return root2;
17        }
18        if(root2 == NULL){
19            return root1;
20        }
21        root1 -> val = root1->val + root2->val;
22        root1->left = mergeTrees(root1->left , root2->left);
23        root1->right = mergeTrees(root1->right , root2->right);
24        return root1;
25    }
26};