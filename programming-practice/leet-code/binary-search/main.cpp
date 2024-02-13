#include <vector>

class Solution {
public:
  int search(std::vector<int> &nums, int target) {

    // Set the high end of the search.
    int high = nums.size();

    // set the lower end range.
    int low = 0;

    // Search as long
    while (high >= low) {

      // Get the mid point.
      int mid = (high + low) / 2;

      // Return a match
      if (nums[mid] == target) {
        return mid;
      }
      // if the number is larger.
      else if (target > nums[mid]) {
        low = mid + 1;
      }
      // If the number is smaller
      else {
        high = mid - 1;
      }
    }

    // nothing found
    return -1;
  }

  bool searchMatrix(std::vector<std::vector<int>> &matrix, int target) {

    int low = 0;
    int high = matrix.size();

    while (high >= low) {
      int mid = (high + low) / 2;

      if (target > matrix[mid][0]) {
        low = mid + 1;
      } else if (target < matrix[mid][0]) {
        high = mid - 1;
      }
    }

    return false;
  }
};
