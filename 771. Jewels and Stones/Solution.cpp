#include <string>
#include <unordered_set>
class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        std::unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;
        for (char s : stones) {
            if (jewelSet.count(s)) {
                count++;
            }
        }
        return count;
    }
};
