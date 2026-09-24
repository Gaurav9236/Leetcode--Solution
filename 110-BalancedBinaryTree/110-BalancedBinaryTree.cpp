// Last updated: 24/09/2026, 15:15:20
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
14    int height(TreeNode* root){
15        if(root == NULL){
16            return 0;
17        }
18        int left = height(root->left);
19        if(left == -1){
20            return -1;
21        }
22        int right = height(root->right);
23        if(right == -1){
24            return -1;
25        }
26        if(abs(left-right) >1) {
27            return -1;
28        }
29        return 1 + max(left,right);   
30
31    }
32    bool isBalanced(TreeNode* root) {
33        
34        return height(root) != -1;   
35    }
36};