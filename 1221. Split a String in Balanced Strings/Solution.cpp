#include <string>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;
        for (char c : s) {
            if (c == 'L') {
                balance++;
            }else {
                balance--;
            }
            if (balance == 0) {
                count++;
            }
        }
        return count;
    }
};
