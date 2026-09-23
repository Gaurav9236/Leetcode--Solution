// Last updated: 23/09/2026, 19:17:57
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
14// BST Ka inorder sorted hota h to inorder traversal kiya h
15// uske baad usko check kr liya sorted h ya nhi
16
17    void Solve(TreeNode* root , vector<int> &ans){
18        if(root == NULL){
19            return ;   
20        }
21        Solve(root->left , ans);
22        ans.push_back(root->val);
23        Solve(root->right, ans);
24
25      }
26    bool isValidBST(TreeNode* root) {
27        vector<int> ans;
28        Solve(root , ans);
29
30        for(int i =0; i<ans.size()-1;i++){
31            if(ans[i] >=ans[i+1]){
32                return false;
33            }
34            
35        }
36        return true;
37        
38    }
39};