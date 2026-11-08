// Last updated: 08/11/2026, 21:42:17
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14
15        if(p->val < root->val && q->val < root->val){
16            return lowestCommonAncestor(root->left , p, q);
17        }
18        if(p->val > root->val && q->val > root->val){
19            return lowestCommonAncestor(root->right , p, q);
20        }
21        return root;
22        
23    }
24};