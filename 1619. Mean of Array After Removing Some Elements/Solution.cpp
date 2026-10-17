#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int removeCount = n / 20;
        double sum = 0;
        for (int i = removeCount; i < n - removeCount; i++){
            sum += arr[i];
        }
        int remainingCount = n - (2 * removeCount);
        return sum / remainingCount;
    }
};
