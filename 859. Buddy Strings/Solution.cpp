#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        if (s == goal) {
            vector<int> counts(26, 0);
            for (char c : s) {
                counts[c - 'a']++;
                if (counts[c - 'a'] > 1) {
                    return true;
                }
            }
            return false;
        }
        vector<int> diffIndices;
        for (int i = 0; i < s.length(); i++){
            if (s[i] != goal[i]){
                diffIndices.push_back(i);
            }
        }
        if (diffIndices.size() == 2){
            int i = diffIndices[0];
            int j = diffIndices[1];
            return s[i] == goal[j] && s[j] == goal[i];
        }
        return false;
    }
};
