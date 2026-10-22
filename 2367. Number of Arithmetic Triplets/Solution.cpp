#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int count = 0;
        for(int num : nums){
            if (numSet.count(num + diff) && numSet.count(num + 2 * diff)) {
                count++;
            }
        }
        return count;
    }
};
