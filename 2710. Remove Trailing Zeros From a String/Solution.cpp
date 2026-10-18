#include <string>
using namespace std;
class Solution {
public:
    string removeTrailingZeros(string num) {
        int endIndex = num.length() - 1;
        while (endIndex >= 0 && num[endIndex] == '0') {
            endIndex--;
        }
        return num.substr(0, endIndex + 1);
    }
};
