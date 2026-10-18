#include <vector>
using namespace std;
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            bool isIncreasing = true;
            int prev = -1;
            for (int j = 0; j < nums.size(); j++){
                if (i == j) continue;
                if (prev != -1 && nums[j] <= prev){
                    isIncreasing = false;
                    break;
                }
                prev = nums[j];
            }
            if (isIncreasing) return true;
        }
        return false;
    }
};
