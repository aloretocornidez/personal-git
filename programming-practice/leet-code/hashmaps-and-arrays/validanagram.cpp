#include <string>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    int alphabet[26];

    // Check if strings identical lengths.
    if (s.size() != t.size()) {
      return false;
    }

    // Initialize the array.
    for (int i = 'a'; i < 'z'; i++) {
      alphabet[i - 'a'] = 0;
    }

    // Increment each letter in s and decrement for each letter in t.
    for (int i = 0; i < s.size(); i++) {
      alphabet[tolower(s[i]) - 'a']++;
      alphabet[tolower(t[i]) - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
      if (alphabet[i] != 0) {
        return false;
      }
    }

    return true;
  }
};
