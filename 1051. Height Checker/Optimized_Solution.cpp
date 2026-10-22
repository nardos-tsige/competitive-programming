#include <vector>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int counts[101] = {0};
        //tally up the heights
        for(int h : heights){
            counts[h]++;
        }
        //build the expected array
        vector<int> expected;
        for(int height = 1; height <= 100; height++){
            while (counts[height] > 0) {
                expected.push_back(height);
                counts[height]--;
            }
        }//compare
        int mismatches = 0;
        for(int i = 0; i < heights.size(); i++){
            if (heights[i] != expected[i]) {
                mismatches++;
            }
        }
        return mismatches;
    }
};
