#include <cmath>
using namespace std;
class Solution {
public:
    int smallestNumber(int n) {
        int k = log2(n) + 1;
        int candidate = pow(2, k) - 1;
        if(candidate < n){
            return pow(2, k + 1) - 1;
        }
        return candidate;
    }
};
