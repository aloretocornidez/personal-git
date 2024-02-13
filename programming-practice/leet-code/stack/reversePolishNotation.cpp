/*
 *
 * You are given an array of strings tokens that represents an arithmetic
 * expression in a Reverse Polish Notation.
 *
 * Evaluate the expression. Return an integer that represents the value of the
 * expression. Note that:
 *
 * The valid operators are '+', '-', '*', and '/'.
 * Each operand may be an integer or another expression.
 * The division between two integers always truncates toward zero.
 * There will not be any division by zero.
 * The input represents a valid arithmetic expression in a reverse polish
 * notation.
 * The answer and all the intermediate calculations can be represented in a
 * 32-bit integer.
 */

#include <stack>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int evalRPN(vector<string> &tokens) {

    stack<int> stk;

    // Begin iterating through each of the elements and appending them to the
    // stack.
    for (int i = 0; i < tokens.size(); i++) {
      // Read the current token
      string token = tokens[i];

      // Add numbers to the stack
      if (token.size() > 1 || isdigit(token[0])) {
        stk.push(stoi(token));
        continue;
      }

      // Get the top two numbers.
      int num2 = stk.top();
      stk.pop();
      int num1 = stk.top();
      stk.pop();

      int result = 0;

      // Conduct the opation that is specified.
      if (token[0] == '+') {
        result = num1 + num2;
      } else if (token[0] == '-') {
        result = num1 - num2;
      } else if (token[0] == '*') {
        result = num1 * num2;
      } else {
        result = num1 / num2;
      }

      // Add the result to the stack.
      stk.push(result);
    }
    
    // Return the final number.
    return stk.top();
  }
};
