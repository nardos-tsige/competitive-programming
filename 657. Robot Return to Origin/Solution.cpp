#include <string>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for(char move : moves){
            if (move == 'U') {
                y++;
            }else if(move == 'D'){
                y--;
            }else if(move == 'R'){
                x++;
            }else if(move == 'L'){
                x--;
            }
        }
        return x == 0 && y == 0;
    }
};
