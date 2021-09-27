//Program to Middle of the Linked List
//Created by Aryan
//Created on 27/09/2021

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto slow = head, fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};