// Last updated: 02/08/2026, 10:46:52
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
11    bool hasCycle(ListNode *head) {
12
13        ListNode* slow = head;
14        ListNode* fast = head;
15
16        while(fast != NULL){
17            fast = fast ->next;
18            if(fast != NULL){
19                fast = fast ->next;
20                slow = slow-> next;
21
22             // condition of meeting or not
23                if(slow == fast){
24                    return true;
25                }
26            }
27        }
28        return false;
29        
30    }
31};