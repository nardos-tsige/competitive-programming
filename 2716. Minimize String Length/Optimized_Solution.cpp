#include <string>
using namespace std;
class Solution {
public:
    int minimizedStringLength(string s) {
        bool seen[26] = {false};
        int count = 0;
        for (char c : s){
            int index = c - 'a';
            if (!seen[index]) {
                seen[index] = true;
                count++;
            }
        }
        return count;
    }
};
