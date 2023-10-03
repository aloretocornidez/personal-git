#include <unordered_map>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        // Hashmap holding the number of occurences of each key.
        unordered_map<int, int> counter;

        // 
        vector<vector<int>> bucket(nums.size() + 1);

        // The vector containing the numbers that occur most in the given array.
        vector<int> answer;


        // Populate the hash map.
        for(int i : nums)
        {
            counter[i]++;
        }


        // Populate the buckets using the values of the map as the index.
        for(auto it: counter)
        {
            bucket[it.second].push_back(it.first);
        }



        // Iterate backwards through the bucket vector, the last element is the most common. 
        for(int i = nums.size(); i > 0; i--)
        {
            if(k == 0)
            {
                return answer;
            }

            for(int j = 0; j < bucket.at(i).size(); j++)
            {
                answer.push_back(bucket[i][j]);
                k--;
            }
        }

        return answer;


        
    }
};
