#include <string>
using namespace std;
class Solution {
public:
    int minLength(string s) {
        string stack = "";
        for (char c : s) {
            if (!stack.empty()) {
                if ((stack.back() == 'A' && c == 'B') || 
                    (stack.back() == 'C' && c == 'D')) {
                    stack.pop_back();
                    continue;
                }
            }
            stack.push_back(c);
        }
        return stack.length();
    }
};
