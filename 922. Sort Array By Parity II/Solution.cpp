#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evens;
        vector<int> odds;
        for (int num : nums) {
            if (num % 2 == 0) {
                evens.push_back(num);
            }else {
                odds.push_back(num);
            }
        }
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                result[i] = evens[i / 2];
            } else {
                result[i] = odds[i / 2];
            }
        }
        return result;
    }
};
