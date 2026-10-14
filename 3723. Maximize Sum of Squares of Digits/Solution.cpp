#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";
        if (sum == 0 && num > 1) return "";
        string result = "";
        for (int i = 0; i < num; i++){
            int remainingPositions = num - 1 - i;
            for (int d = 9; d >= 0; d--){
                int remainingSum = sum - d;
                if (remainingSum >= 0 && remainingSum <= remainingPositions * 9){
                    result += to_string(d);
                    sum = remainingSum;
                    break;
                }
            }
        }
        return result;
    }
};
