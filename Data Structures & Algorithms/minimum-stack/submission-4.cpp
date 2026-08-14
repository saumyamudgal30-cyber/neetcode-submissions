class MinStack {
    std::stack<int> stack;
    std::stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        if(minStack.empty() || val<=minStack.top())
        minStack.push(val);
        else
        minStack.push(minStack.top());//Duplicating the minimum ensures that stack and minStack stay identical in size.

        
        
    }
    
    void pop() {
        stack.pop();
        minStack.pop();
        
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
        
    }
};
