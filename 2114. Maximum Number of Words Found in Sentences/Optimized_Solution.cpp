#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        int max_words = 0;
        
        for (const std::string& sentence : sentences) {
            int words = 1 + std::count(sentence.begin(), sentence.end(), ' ');
            max_words = std::max(max_words, words);
        }
        
        return max_words;
    }
};
