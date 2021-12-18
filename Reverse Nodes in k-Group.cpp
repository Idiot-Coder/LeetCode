//Program to Reverse Nodes in k-Group
//Created by Aryan
//Created on 18/12/2021

class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        
        if (!head){return NULL;}
        ListNode* p=new ListNode(0);
        p->next=head;
        head = p;
        ListNode* q=p;
        while (true){
            int i=0;
            while (q && i<k){q=q->next;i++;}
            if (!q){return head->next;}
            else{
                while (p->next!=q){
                    ListNode* d = p->next;
                    ListNode* l = q->next;
                    p->next=p->next->next;
                    q->next=d;
                    d->next=l;
                }
                for(int j=0;j<k;j++){p=p->next;}
                q=p;
                }
        }
        return head->next;
    }
};
