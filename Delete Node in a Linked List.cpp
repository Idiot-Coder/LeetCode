//Program to Delete Node in a Linked List
//Created by Aryan
//Created on 27/09/2021

class Solution {
public:
    void deleteNode(ListNode* node) {
        if (!node || !node->next) {
            return;
        }
        auto node_to_delete = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete node_to_delete;
    }
};