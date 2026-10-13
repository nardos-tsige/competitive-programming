#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> squared;
        for (int num : nums){
            long long abs_val = abs((long long)num);
            squared.push_back(abs_val * abs_val);
        }
        sort(squared.begin(), squared.end());
        long long result = 0;
        for (int i = 0; i < n / 2; i++) {
            result -= squared[i];
        }
        for (int i = n / 2; i < n; i++) {
            result += squared[i];
        }
        return result;
    }
};
