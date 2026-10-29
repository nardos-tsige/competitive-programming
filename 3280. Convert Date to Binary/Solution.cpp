#include <string>
using namespace std;
class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }

private:
    string toBinary(int num) {
        if(num == 0) return "0";
        string binary = "";
        while(num > 0){
            binary = to_string(num % 2) + binary;
            num = num / 2;
        }
        return binary;
    }
};
