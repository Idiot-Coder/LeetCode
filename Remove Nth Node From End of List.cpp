//Program to Remove Nth Node From End of List
//Created by Aryan
//Created on 26/10/21

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast;
        ListNode* slow;

        fast = head;
        slow = head;

        while(n){
            fast = fast->next;
            n--;
        }

        if(fast == NULL){
            head = head->next;
            return head;
        }

        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }

        if(slow->next && slow->next->next){
            slow->next = slow->next->next;
        } else {
            slow->next = NULL;
        }

        return head;
    }

};