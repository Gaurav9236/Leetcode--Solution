// Last updated: 16/10/2026, 16:03:40
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
14
15    bool check(TreeNode* left , TreeNode* right){
16        if(left == NULL && right == NULL){
17            return true;
18        }
19        if(left == NULL || right == NULL){
20            return false;
21        }
22
23        if (left->val != right->val) {
24            return false;
25        }
26        return check(left->left , right->right) &&
27                    check ( left->right , right->left);
28    }
29    bool isSymmetric(TreeNode* root) {
30        if (root == NULL){
31            return true;
32        }
33        return check(root->left , root->right);
34       
35        
36    }
37};