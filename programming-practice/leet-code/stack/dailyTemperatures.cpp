/*
    Given array of temps, return an array w/ # of days until warmer
    Ex. temperature = [73,74,75,71,69,72,76,73] -> [1,1,4,2,1,1,0,0]

    Monotonic decr stack, at each day, compare incr from prev days

    Time: O(n)
    Space: O(n)
*/
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> dailyTemperatures(vector<int> &temperatures) {

    int numTemps = temperatures.size();

    // pair[index, temperature]
    stack<pair<int, int>> stk;
    vector<int> resultVector(numTemps);

    // Loop through all of the given temperatures
    for (int i = 0; i < numTemps; i++) {
      int currentDay = i;
      int currentTemp = temperatures[i];

      // Iterate through the stack until the temperature is
      while (!stk.empty() && stk.top().second < currentTemp) {
        int previousTemp = stk.top().second;
        int previousDay = stk.top().first;

        stk.pop();

        resultVector[previousDay] = currentDay - previousDay;
      }

      stk.push({currentDay, currentTemp});
    }

    return resultVector;
  }
};
