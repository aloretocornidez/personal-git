#include <unordered_map>
#include <vector>
using namespace std;

/*
 * This algorithm find the indices of a given array `nums` and a target sum, `target`.
 * By populating a hashmap you can find the indices of two number that add up to a target in O(n)
 * This is less time than O(n^2) with a brute force method using two for loops.
 *
 * The algorithm uses the complement = target - nums[i]. 
 * The hashmap  is populated to convert data using the current value of the nums array and the index. 
 * numMap[value of current value of nums array] = current index of nums.
 * This populates the hashmap value with the current index using the current number as the key value.
 * By doing this, the number of elements at a complement key value will be more than zero when the 
 * Current value is equal to the complement.
 * 
 * When the number of 
 * If the numMap[complement] is already populated, then the other index is already
 *
 *
 */


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Initialize an unordered hashmap
        unordered_map<int, int> numMap;

        //Iterate through each number in the entries.
        for(int i = 0; i < nums.size(); i++)
        {
            // The complement is the target minus the value inside the nums array.
            int complement = target - nums[i];

            // Checks the number of elements at the complement and returns the two elements. 
            if(numMap.count(complement))
            {
                return{numMap[complement], i};
            }

            // Populate the index inside of the key (value of key is the current number).
            numMap[nums[i]] = i;
        }

        // No solution found.
        return {};
    }
};
