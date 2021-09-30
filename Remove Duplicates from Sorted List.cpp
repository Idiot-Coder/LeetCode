//Program to Remove Duplicates from Sorted List
//Created by Aryan 
//Created on 30/09/2021

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        ListNode* temp = head;
        while(temp->next)
        {
            if(temp->val == temp->next->val)
            {
                ListNode* tmp;
                tmp = temp->next;
                temp->next = tmp->next;
                delete tmp;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};