#include <vector>
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int rowMap[26];
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        for (char c : row1) rowMap[c - 'a'] = 1;
        for (char c : row2) rowMap[c - 'a'] = 2;
        for (char c : row3) rowMap[c - 'a'] = 3;
        vector<string> result;
        for(string word : words){
            int targetRow = rowMap[tolower(word[0]) - 'a'];
            bool isValid = true;
            for(char c : word){
                if (rowMap[tolower(c) - 'a'] != targetRow) {
                    isValid = false;
                    break;
                }
            }
            if(isValid){
                result.push_back(word);
            }
        }
        return result;
    }
};
