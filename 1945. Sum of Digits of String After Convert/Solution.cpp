#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int getLucky(string s, int k) {
        string numericString = "";
        for (char c : s){
            int val = c - 'a' + 1;
            numericString += to_string(val);
        }
        int currentSum = 0;
        for (char digit : numericString){
            currentSum += digit - '0';
        }
        for (int i = 1; i < k; i++){
            currentSum = sumOfDigits(currentSum);
        }
        return currentSum;
    }
private:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};
