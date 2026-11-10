#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        auto firstNonNegative = lower_bound(nums.begin(), nums.end(), 0);
        auto firstPositive = upper_bound(nums.begin(), nums.end(), 0);
        
        int negCount = firstNonNegative - nums.begin();
        int posCount = nums.end() - firstPositive;
        
        return max(negCount, posCount);
    }
};
