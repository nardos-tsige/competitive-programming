#include <vector>
class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;        
        while (left < right) {
            if (nums[left] % 2 == 0) {
                left++;
            } else if (nums[right] % 2 != 0) {
                right--;
            } else {
                std::swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }
        
        return nums;
    }
};
