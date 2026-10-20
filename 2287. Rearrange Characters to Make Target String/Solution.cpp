#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> sCount(26, 0);
        vector<int> targetCount(26, 0);
        for(char c : s){
            sCount[c - 'a']++;
        }
        for(char c : target){
            targetCount[c - 'a']++;
        }
        int maxCopies = s.length(); 
        
        for(int i = 0; i < 26; i++){
            if (targetCount[i] > 0){
                int copiesFromThisLetter = sCount[i] / targetCount[i];
                maxCopies = min(maxCopies, copiesFromThisLetter);
            }
        }
        return maxCopies;
    }
};
