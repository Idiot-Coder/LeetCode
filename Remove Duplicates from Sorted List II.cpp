//Program to Remove Duplicates from Sorted List II
//Created by Aryan
//Created on 29/10/21

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode *newhead = new ListNode(0), *now = newhead;
        newhead->next = head;        
        while (now->next != NULL) {
            ListNode *p = now->next;
            if (p->next != NULL && p->val == p->next->val) {
                int rec = p->val;
                do  {
                    ListNode *del = p->next;
                    p->next = p->next->next;
                    delete del;
                } 
                while (p->next != NULL && p->next->val == rec);
                now->next = now->next->next;
            }
            else    {
                now = now->next;
            }
        }
        return newhead->next;
    }
};