/* 
 * Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence. 
 * You must write an algorithm that runs in O(n) time.
 */

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
  int longestConsecutive(vector<int> &nums) {

    if (nums.empty()) {
      return 0;
    }

    // Sort the numbers
    sort(nums.begin(), nums.end());

    int count = 1;
    int temp, previous;
    int max = 1;

    // Start a sunning track of the numbers in consecutive order.
    previous = nums.at(0); // initialize the previous value.
    for (int i = 1; i < nums.size(); i++) {

      // Set the current number
      temp = nums.at(i);

      if (temp == previous) {

      }
      // Check if the current number is consecutive.
      else if (temp == previous + 1) {
        count++;
      }
      // Reset the count if the number is not consecutive.
      else {
        if (count > max) {
          max = count;
        }

        count = 1;
      }

      // Update the new previous number
      previous = temp;
    }

    if (count > max) {
      max = count;
    }

    return max;
  }
};
