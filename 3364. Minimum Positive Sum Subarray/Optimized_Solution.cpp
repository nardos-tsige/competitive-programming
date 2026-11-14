#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        int n = nums.size();
        for(int len = l; len <= r; len++) {
            int currentSum = 0;
            
            for(int i = 0; i < n; i++){
                currentSum += nums[i];
                if(i >= len){
                    currentSum -= nums[i - len];
                }
                if(i >= len - 1 && currentSum > 0){
                    minSum = min(minSum, currentSum);
                }
            }
        }
        return minSum == INT_MAX ? -1 : minSum;
    }
};
