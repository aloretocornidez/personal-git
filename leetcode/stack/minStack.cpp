/*
    Design stack that supports push, pop, top, & retriving min element
    
    2 stacks, 1 normal & 1 monotonic decr, only push if lower than top
    
    Time: O(1)
    Space: O(n)
*/

#include <stack>
using namespace std;



class MinStack {
private:

    // Wrapper around the stack.
    stack<int> stk;

    // First: value of the minimum
    // Seconds: number of minimum values
    stack<pair<int, int>> minStk;

public:

    MinStack() { 
    }
    
    void push(int val) {
        stk.push(val);

        // Check if the min stack is empty.
        // or if the value that has been pushed is a new minimum
        if (minStk.empty() || val < minStk.top().first) 
        {
            // Add the value as the new minimum value.
            minStk.push({val, 1});
        } 
        // check if the pushed value is equal to the minimum value.
        else if (val == minStk.top().first) 
        {
            // Increment the number of values that are on the stack that are not the minimum.
            minStk.top().second++;
        }


    }
    
    void pop() {
        // Check if the top value of the stack is equal to the minimum value
        if (stk.top() == minStk.top().first) {

            // reduce the count of the minimum values present.
            minStk.top().second--;

            // If the count of the current minimum is zero, then that minimum value is removed.
            if (minStk.top().second == 0) {
                minStk.pop();
            }
        }

        // Remove the top from the stack.
        stk.pop();

        
    }
    
    int top() {
        // Return the top of the stack.
        return stk.top();
        
    }
    
    int getMin() {
        // Return the minimum value.
        return minStk.top().first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
