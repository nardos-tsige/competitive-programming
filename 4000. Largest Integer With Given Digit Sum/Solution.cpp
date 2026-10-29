#include <string>
using namespace std;
class Solution {
public:
    int largestInteger(int n, int s) {
        if(s == 0){
            return n > 0 ? 0 : -1;
        }
        if(s > 9 * n){
            return -1;
        }
        string result = "";
        for(int i = 0; i < n; i++){
            int digit = min(9, s);
            result += to_string(digit);
            s -= digit;
        }
        return stoi(result);
    }
};
