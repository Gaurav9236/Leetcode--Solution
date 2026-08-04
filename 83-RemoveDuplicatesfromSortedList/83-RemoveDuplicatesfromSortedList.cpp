// Last updated: 04/08/2026, 09:27:26
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if(head == NULL){
15            return head;
16        }
17
18        if(head -> next == NULL){
19            return head;
20        }
21
22        ListNode* prev = head;
23        ListNode* curr = head ->next;
24
25        while(curr!=NULL){
26            if(curr->val !=prev->val){
27                curr = curr->next;
28                prev = prev ->next;
29            }
30            else{
31                //jb value equal ho
32                prev -> next = curr -> next;
33                curr -> next = NULL;
34                delete curr;
35                curr = prev -> next;
36            }
37        }
38        return head;
39        
40    }
41};