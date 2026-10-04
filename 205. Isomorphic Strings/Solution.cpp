#include <string>
#include <unordered_map>
#include <unordered_set>
class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        if (s.size() != t.size()) return false;
        std::unordered_map<char, char> map;
        std::unordered_set<char> used;
        for (int i = 0; i < s.size(); i++) {
            if (map.count(s[i])) {
                if (map[s[i]] != t[i]) {
                    return false;
                }
            }else {
                if (used.count(t[i])) {
                    return false;
                }
                map[s[i]] = t[i];
                used.insert(t[i]);
            }
        }
        return true;
    }
};
