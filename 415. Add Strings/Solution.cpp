#include <string>
#include <algorithm>
class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        std::string result;
        while (i >= 0 || j >= 0 || carry > 0) {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;
            
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            result += (char)('0' + sum % 10);
            
            i--;
            j--;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
