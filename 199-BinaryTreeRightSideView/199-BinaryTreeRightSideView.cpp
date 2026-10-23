// Last updated: 23/10/2026, 11:24:46
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
14vector<int>res;
15void solve(TreeNode* root,int level){
16    if(root==nullptr) return;
17    if(res.size()==level){
18        res.push_back(root->val);
19
20    }
21    if(root->left==nullptr&&root->right==nullptr){
22        return;
23    }
24    solve(root->right,level+1);
25    solve(root->left,level+1);
26}
27    vector<int> rightSideView(TreeNode* root) {
28        solve(root,0);
29        return res;
30        
31    }
32};