#include <string>
#include <sstream>
using namespace std;
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int index = 1;
        while(ss >> word){
            if(word.find(searchWord) == 0){
                return index;
            }
            index++;
        }
        return -1;
    }
};
