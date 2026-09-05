// Last updated: 05/09/2026, 15:45:50
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeNodes(ListNode* head) {
14        if(head == NULL || head ->next ==NULL){
15            return head;
16        }
17
18        head->next = removeNodes(head->next);
19        if(head->val < head->next->val){
20            return head->next;
21        }
22        
23        
24        return head;
25    }
26};