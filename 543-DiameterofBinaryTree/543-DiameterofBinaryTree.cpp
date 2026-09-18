// Last updated: 18/09/2026, 23:38:43
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
14    int maxDepth(TreeNode* root){
15        if(root == NULL){
16            return 0;
17        }
18        int left = maxDepth(root->left)+1;
19        int right = maxDepth(root->right)+1;
20        int ans = max(left,right);
21        return ans;
22        
23
24    }
25    int diameterOfBinaryTree(TreeNode* root) {
26         if(root == NULL){
27            return 0;
28        }
29
30    int option1 = maxDepth(root->left) + maxDepth(root->right);
31    int option2 =  diameterOfBinaryTree(root->left);
32    int option3 =  diameterOfBinaryTree(root->right);
33
34    int ans = max(option1 , max(option2, option3));
35    
36
37    return ans;
38    }
39};