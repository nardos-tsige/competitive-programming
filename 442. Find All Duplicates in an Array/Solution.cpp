#include <vector>
#include <cstdlib>
class Solution {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
        std::vector<int> result;
        for (int x : nums) {
            int index = std::abs(x) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            } else {
                result.push_back(std::abs(x));
            }
        }
        return result;
    }
};
