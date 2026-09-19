// Last updated: 19/09/2026, 10:09:09
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
14    bool Solve(TreeNode* root, int targetSum,int sum){
15        if(root == NULL){
16            return false;
17        }
18        sum+=root->val;
19
20        if(root->left == NULL && root->right == NULL){
21            if(sum == targetSum){
22                return true;
23            }
24            return false;
25        }
26        return Solve(root->left , targetSum,sum) || 
27               Solve(root->right , targetSum , sum);
28
29
30    }
31    bool hasPathSum(TreeNode* root, int targetSum) {
32        return Solve(root , targetSum , 0);
33        
34    }
35};