// Last updated: 25/10/2026, 15:32:15
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
14    void Solve(TreeNode* root,vector<int> &ans){
15        if(root == NULL){
16            return;
17        }
18
19        Solve(root->left , ans);
20        ans.push_back(root->val);
21        Solve(root->right ,ans);
22    }
23    int getMinimumDifference(TreeNode* root) {
24        vector<int> ans;
25        Solve(root , ans);
26
27        int n = ans.size();
28        int mini  = INT_MAX;
29        for(int i =0; i <n-1 ;i++){
30            mini = min (mini , (abs(ans[i]-ans[i+1])));
31        }
32        return mini;
33
34        
35    }
36};