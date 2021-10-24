//Program to Reverse Linked List II
//Created by Aryan
//Created on 25/10/2021

class Solution {
public:
    ListNode *reverseBetween(ListNode *current, int m, int n) {
        ListNode dummy(INT_MIN), *prev=NULL, *tail=NULL;
        dummy.next = current;
        current = &dummy;
        
        for (int i=0; i <= n; i++) {
            ListNode *next = current->next;
            if (i == m) tail = current;
            if (i >= m && i <= n) current->next = prev;
            prev = current;
            current = next;
        }
        
        tail->next->next = prev;
        tail->next = current;
        
        return dummy.next;
    }
};