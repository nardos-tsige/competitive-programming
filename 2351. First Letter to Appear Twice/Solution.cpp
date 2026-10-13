#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> seen(26, false);
        for (char c : s) {
            int index = c - 'a';
            if (seen[index] == true) {
                return c;
            }
            seen[index] = true;
        }
        return ' ';
    }
};
