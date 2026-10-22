#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int mismatchCount = 0;
        for(int i = 0; i<heights.size(); i++){
            if (heights[i] != expected[i]) {
                mismatchCount++;
            }
        }
        return mismatchCount;
    }
};
