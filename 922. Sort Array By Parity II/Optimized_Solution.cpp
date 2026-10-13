#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evenIdx = 0;
        int oddIdx = 1;
        int n = nums.size();
        while (evenIdx < n && oddIdx < n) {
            while (evenIdx < n && nums[evenIdx] % 2 == 0) {
                evenIdx += 2;
            }
            while (oddIdx < n && nums[oddIdx] % 2 != 0) {
                oddIdx += 2;
            }
            if (evenIdx < n && oddIdx < n) {
                swap(nums[evenIdx], nums[oddIdx]);
            }
        }
        return nums;
    }
};
