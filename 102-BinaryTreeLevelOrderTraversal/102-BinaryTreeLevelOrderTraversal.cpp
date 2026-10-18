// Last updated: 18/10/2026, 19:07:33
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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>> ans;
16
17        if (root == NULL){
18            return ans;
19        }
20
21        queue<TreeNode*> q;
22        q.push(root);
23
24        while (!q.empty()) {
25            int n = q.size();
26            vector<int> level;
27
28            while (n--) {
29                TreeNode* node = q.front();
30                q.pop();
31
32                level.push_back(node->val);
33
34                if (node->left)
35                    q.push(node->left);
36
37                if (node->right)
38                    q.push(node->right);
39            }
40
41            ans.push_back(level);
42        }
43
44        return ans;
45
46      
47        
48    }
49};