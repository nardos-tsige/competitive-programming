#include <string>
#include <algorithm>
class Solution {
public:
    int firstUniqChar(std::string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s.find(s[i]) == s.rfind(s[i])) {
                return i;
            }
        }
        //s.find(c) returns the first index where c appears.
//s.rfind(c) returns the last index where c appears.
//if they're the same, c appears exactly once → unique!
        return -1;
    }
};
