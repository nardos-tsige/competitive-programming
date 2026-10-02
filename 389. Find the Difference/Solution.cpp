#include <string>
#include <unordered_map>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        std::unordered_map<char, int> freq;
        
        for (char c : s) {
            freq[c]++;
        }
        
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0) {
                return c;
            }
        }
        
        return ' ';
    }
};
