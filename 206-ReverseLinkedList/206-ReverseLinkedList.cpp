// Last updated: 10/08/2026, 19:06:12
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
13    ListNode* reverseList(ListNode* head) {
14        if(head == NULL){
15            return head ;
16        }
17
18        ListNode* prev = NULL;
19        ListNode* curr = head;
20
21        while(curr!=NULL){
22            ListNode* forward = curr -> next;
23            curr -> next = prev;
24            prev = curr;
25            curr = forward;
26        }
27        return prev ;
28        
29    }
30};