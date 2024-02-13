/*
 *
 * Given n pairs of parentheses, write a function to generate all
 * combinations of well-formed parentheses.
 * Input: n = 3
 * Output: ["((()))","(()())","(())()","()(())","()()()"]
 */

#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  vector<string> generateParenthesis(int n) {

    vector<string> result;
    generate(n, 0, 0, "", result);

    return result;
  }

private:
  void generate(int n, int open, int close, string str,
                vector<string> &result) {
    // Return of the correct amount of parenthesis are placed.
    if (open == n && close == n) {
      result.push_back(str);
      return;
    }
    // add all possible open parenthesis
    if (open < n) {
      generate(n, open + 1, close, str + '(', result);
    }
    // After all open possibilities have been exerted, start closing.
    if (open > close) {
      generate(n, open, close + 1, str + ')', result);
    }
  }
};
