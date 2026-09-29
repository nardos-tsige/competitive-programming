#include <cmath>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> n;
        for (int num : nums){
            int k = pow(num, 2);
            n.push_back(k);
        }
        std::sort(n.begin(), n.end());
        return n;
    }
};
