#include <string>
#include <cctype>
class Solution {
public:
    std::string toLowerCase(std::string s) {
        for (char& c : s) {
            c = std::tolower(c);
        }
        return s;
    }
};
