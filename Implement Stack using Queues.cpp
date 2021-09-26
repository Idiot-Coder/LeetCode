//Program to Implement Stack using Queues
//Created by Aryan
//Created on 26/09/2021

class MyStack {
public:
	queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
	// Push element x onto stack.
    void push(int x) {
		     q1.push(x);   // taking all inputs in q1
    }
    
    // Removes the element on top of the stack and returns that element. 
	  int pop() {
        int n = q1.size();
		//Store every element of q1 in q2 except the last one 
        while(q2.size() != n-1){
            q2.push(q1.front());
            q1.pop();
        }
        int k = q1.front();  // store and return front
        q1 = q2;    
        while(!q2.empty()){
            q2.pop();
        }
        return k;
    }
    
    // Get the top element. 
    int top() {
        int n = q1.size();
        while(q2.size() != n-1){
            q2.push(q1.front());
            q1.pop();
        }
        int k = q1.front();
        q2.push(k);   //only this line of code differs from pop() i.e. just add the element again to q2
        q1 = q2;
        while(!q2.empty()){
            q2.pop();
        }
        return k;
    }
    
    // Returns whether the stack is empty. 
    bool empty() {
        return q1.empty() and q2.empty();
    }
};