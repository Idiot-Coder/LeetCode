//Program to Convert Binary Number in a Linked List to Integer
//Created by Aryan
//Created on 27/09/2021

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = 0;
        for (; head; head = head->next) {
            result = result * 2 + head->val;
        }
        return result;
    }
};