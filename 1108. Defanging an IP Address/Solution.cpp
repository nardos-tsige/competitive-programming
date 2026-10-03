#include <string>
class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string result;
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};
