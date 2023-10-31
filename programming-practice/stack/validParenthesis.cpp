#include <stack>
#include <string>
#include <unordered_map>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        // A map with closing and opening parenthesis.
        unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };


        
        // Iterate through each character in the given string.
        for (const auto& c : s) {

            // Check if the input is a closing brace.
            if (parens.find(c) != parens.end()) {
                
                // if input starts with a closing bracket.
                if (open.empty()) {
                    return false;
                }


                // If the most recent element on the stack is not the opening brace of the 
                // current closing brace, then the brace is not closed correctly.
                if (open.top() != parens[c]) {
                    return false;
                }
                
                // Removes the most recent opening bracket in the stack.
                open.pop();
            }
            // Add an opening brace. 
            else {
                open.push(c);
            }
        }

        // If the stack is empty, all braces have been closed.
        // Otherwise, open braces remain in the string. 
        return open.empty();
        
    }
};
