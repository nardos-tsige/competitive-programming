#include <vector>
#include <unordered_map>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;
        int count = 0;
        
        for (int num : nums) {
            count += freq[num];
            freq[num]++;
        }
        
        return count;
    }
};
