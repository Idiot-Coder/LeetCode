//Program to Reorder List
//Created by Aryan
//Created on 25/10/2021

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next)
            return;
       
        ListNode *p1 = head, *p2 = head;
        
        while(p2->next && p2->next->next){
            p1 = p1->next;
            p2 = p2->next->next;
        }
        
        
        ListNode *preMid = p1, *preCur = p1->next;
        while(preCur->next){
            ListNode* cur = preCur->next;
           
            preCur->next = cur->next;
            cur->next = preMid->next;
           
            preMid->next = cur;
        }
       
        p1 = head;
        p2 = preMid->next;
        
        while(p1 != preMid){
           
            preMid->next = p2->next;
            p2->next = p1->next;
            p1->next = p2;
            p1 = p2->next;
            p2 = preMid->next;
        }
    }
};