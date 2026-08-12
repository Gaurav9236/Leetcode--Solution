// Last updated: 12/08/2026, 14:46:18
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
13    ListNode* removeElements(ListNode* head, int val) {
14
15        while (head != NULL && head-> val == val){
16            head = head->next;
17        }
18
19        ListNode* curr = head;
20
21        while(curr!=NULL && curr -> next != NULL){
22            if(curr->next->val == val){
23                curr->next = curr->next->next;
24            }
25            else{
26                curr = curr->next;
27            }
28        }
29        return head;
30        
31    }
32};