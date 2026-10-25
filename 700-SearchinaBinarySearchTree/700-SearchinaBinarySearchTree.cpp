// Last updated: 25/10/2026, 07:40:16
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
14    TreeNode* searchBST(TreeNode* root, int val) {
15        if(root == NULL){  // NULL or nullptr dono kr skte h
16            return NULL;
17        }
18        if(val < root->val){
19           return searchBST(root->left , val);
20            
21        }
22        else if(val > root->val){
23           return searchBST(root->right , val);
24            
25        }
26        return root;
27
28    
29        
30    }
31};