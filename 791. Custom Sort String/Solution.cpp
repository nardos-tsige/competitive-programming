#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> counts(26, 0);
        for(char c : s){
            counts[c - 'a']++;
        }
        string result = "";
        for (char c : order){
            while (counts[c - 'a'] > 0) {
                result += c;
                counts[c - 'a']--;
            }
        }
        for(int i = 0; i < 26; i++){
            while (counts[i] > 0) {
                result += (char)(i + 'a');
                counts[i]--;
            }
        }
        return result;
    }
};
