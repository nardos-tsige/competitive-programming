#include <string>
using namespace std;
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insidePair = false;
        for(char c : s){
            if(c == '|'){
                insidePair = !insidePair;
            }else if(c == '*' && !insidePair){
                count++;
            }
        }
        return count;
    }
};
