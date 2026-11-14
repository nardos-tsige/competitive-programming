#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int currentSum = 0;
            for(int j = i; j < n; j++){
                currentSum += nums[j];
                int length = j - i + 1;
                if(length >= l && length <= r && currentSum > 0){
                    minSum = min(minSum, currentSum);
                }
            }
        }
        return minSum == INT_MAX ? -1 : minSum;
    }
};
