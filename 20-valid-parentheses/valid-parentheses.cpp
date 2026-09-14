#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        
        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // For closing brackets, check for a valid match
            else {
                if (st.empty()) return false; // No matching opening bracket
                
                char top = st.top();
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    st.pop(); // Valid match found
                } else {
                    return false; // Mismatched brackets
                }
            }
        }
        
        // If stack is empty, all brackets were matched correctly
        return st.empty();
    }
};

