// Last updated: 24/10/2026, 12:20:41
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
16            return ;
17        }
18        Solve(root->left ,ans);
19        ans.push_back(root->val);
20        Solve(root->right , ans);
21    }
22    int rangeSumBST(TreeNode* root, int low, int high) {
23        vector<int> ans;
24        Solve(root , ans);
25
26        int sum =0;
27        int start;
28        int end;
29        for(int i =0;i<ans.size();i++){
30            if(ans[i] == low){
31                start = i;
32            }
33            if(ans[i] == high){
34                end = i;
35            }
36        }
37        for(int i = start ; i<=end;i++){
38            sum += ans[i];
39        }
40        return sum;
41        
42    }
43};