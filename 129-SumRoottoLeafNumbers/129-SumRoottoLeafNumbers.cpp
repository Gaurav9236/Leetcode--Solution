// Last updated: 17/10/2026, 16:17:07
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
14    int Solve(TreeNode* root , int sum){
15        if(root == NULL){
16            return 0;
17        }
18
19        sum  = sum*10 + root->val;
20        if(root->left == NULL && root->right == NULL){
21            return sum;
22        }
23        return Solve(root->left , sum) + 
24               Solve(root->right , sum);
25    }
26    int sumNumbers(TreeNode* root) {
27        return Solve(root , 0);
28        
29    }
30};