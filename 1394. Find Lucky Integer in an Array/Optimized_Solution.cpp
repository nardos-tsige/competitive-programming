#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxVal = 0;
        for (int num : arr) {
            maxVal = max(maxVal, num);
        }
        vector<int> counts(maxVal + 1, 0);
        for (int num : arr) {
            counts[num]++;
        }
        int maxLucky = -1;
        for (int i = 1; i <= maxVal; i++) {
            if (counts[i] == i) {
                maxLucky = i;
            }
        }
        return maxLucky;
    }
};
