#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int moves = 0;
        for(int num : nums){
            moves += (maxVal - num);
        }
        return moves;
    }
};
