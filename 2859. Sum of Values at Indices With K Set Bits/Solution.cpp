#include <vector>
using namespace std;
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(__builtin_popcount(i) == k){ /*__builtin_popcount takes time proportional to the number of bits(at most 32), making it effectively O(N) in practice.*/
                totalSum += nums[i];
            }
        }
        return totalSum;
    }
};
