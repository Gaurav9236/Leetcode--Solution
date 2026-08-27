// Last updated: 27/08/2026, 13:50:52
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
13    bool isPalindrome(ListNode* head) {
14        stack<int> st;
15        ListNode* temp = head;
16
17        while(temp != NULL){
18            st.push(temp->val);
19            temp = temp->next;
20        }
21        temp = head;
22        while(temp!=NULL){
23            if(temp->val != st.top()){
24                return false;
25            }
26            st.pop();
27            temp = temp->next;
28        }
29        return true;
30        
31    }
32};