#include <vector>
using namespace std;
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int result = 0;
        for (int num : nums){
            if (num % 2 == 0) {
                result = result | num;
            }
        }
        return result;
    }
};
