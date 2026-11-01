#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int currentDepth = 0;
        int maxDepth = 0;
        for(char c : s) {
            if(c == '('){
                currentDepth++;
                maxDepth = max(maxDepth, currentDepth);
            }else if(c == ')'){
                currentDepth--;
            }
        }
        return maxDepth;
    }
};
