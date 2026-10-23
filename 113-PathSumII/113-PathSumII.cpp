// Last updated: 23/10/2026, 11:33:54
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
12
13class Solution {
14public:
15    vector<int> res;
16    vector<vector<int>> ans;
17
18    void solve(TreeNode* root, int targetSum) {
19        if (root == nullptr) return;
20
21        res.push_back(root->val);
22
23        int remaining = targetSum - root->val;
24
25        if (root->left == nullptr && root->right == nullptr) {
26            if (remaining == 0) {
27                ans.push_back(res);
28            }
29        }
30
31        solve(root->left, remaining);
32        solve(root->right, remaining);
33
34        res.pop_back();
35    }
36
37    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
38        ans.clear();
39        res.clear();
40
41        solve(root, targetSum);
42
43        return ans;
44    }
45};
46