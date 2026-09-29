#include <climits>

class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        
        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        }
        
        return result;
    }
};
