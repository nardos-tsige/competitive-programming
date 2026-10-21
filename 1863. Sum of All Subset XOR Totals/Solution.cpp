#include <vector>
using namespace std;
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bitwiseOR = 0;
        for(int num : nums){
            bitwiseOR |= num;
        }
        return bitwiseOR << (nums.size() - 1);
    }
};
