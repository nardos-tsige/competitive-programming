#include <vector>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] < target){
                    count++;
                }
            }
        }
        return count;
    }
};
