/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* first = head;   
        ListNode* last = head;
        
        while ( last && last->next ){
            ListNode* temp = last->next;
            last->next = last->next->next;
            temp->next = first;
            first = temp;
        }  

        return first;
    }
};