#include <vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int dropCount = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] > nums[(i + 1) % n]){
                dropCount++;
            }
        }
        return dropCount <= 1;
    }
};
