#include <string>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        string stack = "";
        for (char c : s){
            if (c == '*'){
                stack.pop_back();
            }else{
                stack.push_back(c);
            }
        }
        return stack;
    }
};
