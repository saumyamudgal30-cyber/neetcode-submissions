class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stack;
        for(int i=0;i<tokens.size();i++){
            string c = tokens[i];
            if(c =="+"){
                int a=stack.top();stack.pop();//right operand
                int b=stack.top();stack.pop();
                stack.push(b+a);
            }
            else if(c == "-"){
                 int a=stack.top();stack.pop();//right operand
                 int b=stack.top();stack.pop();
                 stack.push(b-a);
            
            }
            else if (c=="*"){
                 int a=stack.top();stack.pop();//right operand
                 int b=stack.top();stack.pop();
                 stack.push(b*a);

            }
            else if(c=="/"){
                 int a=stack.top();stack.pop();//right operand
                int b=stack.top();stack.pop();
                stack.push(b/a);
            }
            else{
                stack.push(stoi(c));
            }
        }
        return stack.top();
    }
};
