// Last updated: 07/09/2026, 16:38:19
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14
15        if (head == NULL || left == right)
16            return head;
17
18        ListNode dummy(0);
19        dummy.next = head;
20
21        ListNode* prev = &dummy;   
22
23        for (int i = 1; i < left; i++) {
24            prev = prev->next;
25        }
26
27        ListNode* curr = prev->next;
28
29        for (int i = 0; i < right - left; i++) {
30            ListNode* next = curr->next;
31            curr->next = next->next;
32            next->next = prev->next;
33            prev->next = next;
34        }
35
36        return dummy.next;
37    }
38};