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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head){
            return head;
        }
        int length = getLength(head);
        k = k % length;
        if ( k== 0) return head;
        int remaining = length - k;
        ListNode* curr = head;
        
        for (int i = 0; i <remaining - 1 ; i++){
            curr  = curr->next;
        }

        ListNode* newHead = curr->next;
        curr->next = nullptr;

        ListNode* temp = newHead;
        while (temp->next){
            temp = temp->next;
        }
        temp->next = head;
        return newHead;
    }

    int getLength(ListNode* head){
        int length = 0;
        for (ListNode* temp = head ; temp ; temp = temp->next ){
            length ++;
        }
        return length;
    }
};