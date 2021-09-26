//Program to Implement Queue using Stacks
//Created by Aryan
//Created on 26/09/2021

class MyQueue {
    stack<int> st1,st2;
    int size;
public:
    MyQueue() {
        size = 0;
    }
    
    void push(int x) {
        st1.push(x);
        size++;
    }
    
    int pop() {
        if(st1.empty() and st2.empty()) return -1;
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        size--;
        int poped =  st2.top();
        st2.pop();
        return poped;
    }
    
    int peek() {
        if(st1.empty() and st2.empty()) return -1;
        if(!st2.empty()) return st2.top();
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
    
    bool empty() {
        if(st1.empty() and st2.empty()) return true;
        else return false;
    }
};