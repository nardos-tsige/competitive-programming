#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.length()){
            return s;
        }
        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;
        for(char c : s){
            rows[currentRow] += c;
            if(currentRow == 0 || currentRow == numRows - 1){
                goingDown = !goingDown;
            }
            currentRow += goingDown ? 1 : -1;
        }
        string result = "";
        for(string row : rows){
            result += row;
        }
        return result;
    }
};
