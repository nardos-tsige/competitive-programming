#include <vector>
#include <unordered_map>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;
        
        for (int num : nums) {
            freq[num]++;
        }
        
        for (auto& [num, count] : freq) {
            if (count == 1) {
                return num;
            }
        }
        
        return -1;
    }
};
