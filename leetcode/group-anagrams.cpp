#include <algorithm>
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {

    // Initialize a hash map to return the results.
    unordered_map<string, vector<string>> stringMap;

    // Iterate through each word in the given vector.
    for (std::string word : strs) {
      // Create a word that is the sorted version of the input.
      std::string sortedWord = word;
      sort(sortedWord.begin(), sortedWord.end());

      // At each key that is sorted, add the
      stringMap[sortedWord].push_back(word);
    }

    // Initialzie the return variables.
    vector<vector<string>> anagrams;

    // Assemble the final return array.
    for (auto element : stringMap) {
      anagrams.push_back(element.second);
    }

    // Return the found anagrams.
    return anagrams;
  }
};
