#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = word.find(ch);
        if(index != string::npos){
            reverse(word.begin(), word.begin() + index + 1);
        }
        return word;
    }
};
