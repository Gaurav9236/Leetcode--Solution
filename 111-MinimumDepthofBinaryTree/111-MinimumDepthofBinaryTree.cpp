// Last updated: 22/09/2026, 22:07:08
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
14    int minDepth(TreeNode* root) {
15        if(root == NULL){
16            return 0;
17        }
18        if(root->left == NULL){
19            return 1 + minDepth(root->right);
20        }
21        if(root->right == NULL){
22            return 1 + minDepth(root->left);
23        }
24        return 1 + min(minDepth(root->left) , minDepth(root->right));
25        
26       
27        
28    }
29};