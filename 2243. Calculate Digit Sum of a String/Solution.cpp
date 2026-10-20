#include <string>
#include <numeric>
using namespace std;
class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k){
            string next_s = "";
            for(int i = 0; i < s.length(); i += k){
                int currentSum = 0;
                for (int j = i; j < i + k && j < s.length(); j++) {
                    currentSum += s[j] - '0';
                }
                next_s += to_string(currentSum);
            }
            s = next_s;
        }
        return s;
    }
};
