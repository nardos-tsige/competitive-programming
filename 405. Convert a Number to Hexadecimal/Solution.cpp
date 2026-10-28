#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string hexChars = "0123456789abcdef";
        string result = "";
        for(int i = 0; i < 8; i++){
            int lastFourBits = num & 15;
            result += hexChars[lastFourBits];
            num = num >> 4;
        }
        while(result.back() == '0'){
            result.pop_back();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
