#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", 
            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", 
            "..-", "...-", ".--", "-..-", "-.--", "--.."
        };
        unordered_set<string> uniqueTranslations;
        for(string word : words){
            string translation = "";
            
            for(char c : word){
                translation += morseCode[c - 'a'];
            }
            uniqueTranslations.insert(translation);
        }
        return uniqueTranslations.size();
    }
};
