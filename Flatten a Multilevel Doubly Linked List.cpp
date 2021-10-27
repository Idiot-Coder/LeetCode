//Program to Flatten a Multilevel Doubly Linked List
//Created by Aryan
//Created on 27/10/21

class Solution {
public:
    void helper(Node* node, vector<int>& nodes)
    {
        if (!node)return;
        nodes.push_back(node->val);
        if (node->child)helper(node->child, nodes);
        if (node->next)helper(node->next, nodes);
    }
    Node* flatten(Node* head) {
        if(!head)return head;
        vector<int> nodes;
        helper(head, nodes);
        auto node = new Node(nodes[0]);
        head = node;
        for (int i=1;i<nodes.size();++i)
        {   
            auto v = nodes[i];
            auto new_node = new Node(v);
            node->next = new_node;
            new_node->prev = node;
            node = new_node;
        }
        return head;
      
    }
};