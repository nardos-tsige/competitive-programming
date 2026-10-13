#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxSoFar = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int currentVal = arr[i];
            arr[i] = maxSoFar;
            maxSoFar = max(maxSoFar, currentVal);
        }
        return arr;
    }
};
