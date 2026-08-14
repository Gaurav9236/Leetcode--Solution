// Last updated: 14/08/2026, 17:16:24
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* node) {
12
13         node->val = node->next->val;
14         node->next = node->next->next;
15        
16    }
17};