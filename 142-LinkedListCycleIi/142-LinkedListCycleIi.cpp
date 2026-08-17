// Last updated: 17/08/2026, 18:32:10
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        // slow fast method se time limit exceed ho ja rhi hai

        unordered_set<ListNode*>visit;

        while(head!=NULL){
            if(visit.find(head) != visit.end()){
                return head;

            }
            visit.insert(head);
            head = head ->next;
        }
        return NULL;


       
        
    }
};