#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = 0;
        for (string s : strs){
            bool isAllDigits = true;
            for (char c : s){
                if (!isdigit(c)) {
                    isAllDigits = false;
                    break;
                }
            }
            int currentVal;
            if (isAllDigits){
                currentVal = stoi(s);
            }else{
                currentVal = s.length();
            }
            maxVal = max(maxVal, currentVal);
        }
        return maxVal;
    }
};
