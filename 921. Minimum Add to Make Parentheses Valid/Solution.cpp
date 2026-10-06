#include <string>
class Solution {
public:
    int minAddToMakeValid(std::string s) {
        int open = 0;
        int adds = 0;
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    adds++;
                }
            }
        }
        return adds + open;
    }
};
