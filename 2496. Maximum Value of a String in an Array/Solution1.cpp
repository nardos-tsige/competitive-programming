#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = 0;
        for (const string& s : strs){
            bool isAllDigits = all_of(s.begin(), s.end(), ::isdigit);
            int currentVal = isAllDigits ? stoi(s) : s.length();
            maxVal = max(maxVal, currentVal);
        }
        return maxVal;
    }
};
