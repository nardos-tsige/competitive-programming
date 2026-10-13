#include <vector>
using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxLucky = -1;
        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == arr[i]) {
                    count++;
                }
            }
            if (count == arr[i]) {
                if (arr[i] > maxLucky) {
                    maxLucky = arr[i];
                }
            }
        }
        return maxLucky;
    }
};
