// Last updated: 05/08/2026, 08:04:00
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
11    ListNode *detectCycle(ListNode *head) {
12
13        // slow fast method se time limit exceed ho ja rhi hai
14
15        unordered_set<ListNode*>visit;
16
17        while(head!=NULL){
18            if(visit.find(head) != visit.end()){
19                return head;
20
21            }
22            visit.insert(head);
23            head = head ->next;
24        }
25        return NULL;
26
27
28       
29        
30    }
31};