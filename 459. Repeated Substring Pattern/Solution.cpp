#include <string>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for(int len = 1; len <= n / 2; len++){
            if(n % len == 0){
                string pattern = s.substr(0, len);
                string repeated = "";
                for(int i = 0; i < n / len; i++){
                    repeated += pattern;
                }
                if(repeated == s){
                    return true;
                }
            }
        }
        return false;
    }
};
