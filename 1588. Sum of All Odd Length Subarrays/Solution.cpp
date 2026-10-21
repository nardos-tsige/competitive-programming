#include <vector>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalSum = 0;
        int n = arr.size();
        for(int start = 0; start < n; start++){
            int currentSum = 0;
            for (int end = start; end < n; end++) {
                currentSum += arr[end];
                int length = end - start + 1;
                if (length % 2 != 0) {
                    totalSum += currentSum;
                }
            }
        }
        return totalSum;
    }
};
