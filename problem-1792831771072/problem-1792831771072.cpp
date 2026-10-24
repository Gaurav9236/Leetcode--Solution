// Last updated: 24/10/2026, 14:19:31
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
14    void Solve(TreeNode* root, vector<int> &ans){
15        if(root == NULL){
16            return;
17        }
18        Solve(root ->left ,ans);
19        ans.push_back(root->val );
20        Solve(root->right,  ans);
21    }
22    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
23        vector<int> ans;
24        Solve(root1 , ans);
25        Solve(root2 , ans);
26        sort(ans.begin(),ans.end());
27        return ans;
28        
29    }
30};