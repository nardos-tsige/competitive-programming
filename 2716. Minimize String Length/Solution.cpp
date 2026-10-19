#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> uniqueChars(s.begin(), s.end());
        return uniqueChars.size();
    }
};
