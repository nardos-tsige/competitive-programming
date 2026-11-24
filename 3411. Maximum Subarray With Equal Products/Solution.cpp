#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 1;
        for(int i = 0; i < n; i++){
            long long prod = 1;
            long long currentLcm = 1;
            int currentGcd = nums[i];
            for(int j = i; j < n; j++){
                prod *= nums[j];
                currentLcm = lcm(currentLcm, nums[j]);
                currentGcd = gcd(currentGcd, nums[j]);
                if(prod > 1000000000) break;
                if(prod == currentLcm * currentGcd) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};
