#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> availableChars(26, 0);
        for(char c : chars){
            availableChars[c - 'a']++;
        }
        int totalLength = 0;
        for(string word : words){
            vector<int> neededChars = availableChars;
            bool canForm = true;
            for(char c : word){
                if(neededChars[c - 'a'] > 0){
                    neededChars[c - 'a']--;
                }else{
                    canForm = false;
                    break;
                }
            }
            if(canForm){
                totalLength += word.length();
            }
        }
        return totalLength;
    }
};
