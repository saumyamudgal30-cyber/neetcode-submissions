#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
         std::stack<char>st;

        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // Handle closing brackets
            else {
                // If stack is empty, there is no matching opening bracket
                if (st.empty()) return false;

                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop(); // Valid match found
                } else {
                    return false;//mismatched bracket type
                }
            }
        }

        // Returns true if all brackets were properly matched and popped
         return st.empty();
    }
};
