#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];
        int moves = 0;
        for(int num : nums){
            moves += abs(num - median);
        }
        return moves;
    }
};
