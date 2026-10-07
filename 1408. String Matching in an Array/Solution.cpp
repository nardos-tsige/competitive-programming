#include <vector>
#include <string>
class Solution {
public:
    std::vector<std::string> stringMatching(std::vector<std::string>& words) {
        std::vector<std::string> result;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (i != j && words[j].find(words[i]) != std::string::npos) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }
        return result;
    }
};
