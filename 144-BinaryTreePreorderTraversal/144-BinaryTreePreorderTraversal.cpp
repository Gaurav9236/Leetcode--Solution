// Last updated: 15/09/2026, 22:02:02
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
14      void Solve(TreeNode* root , vector<int> &ans){
15        if(root == NULL){
16            return ;
17            
18        }
19        ans.push_back(root->val);
20        Solve(root->left , ans);
21        Solve(root->right, ans);
22
23      }
24     
25    vector<int> preorderTraversal(TreeNode* root) {
26        vector<int> ans;
27        Solve(root, ans);
28        return ans;
29        
30        
31    }
32};