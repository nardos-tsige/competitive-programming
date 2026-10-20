#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> waitingRoom;
        int pairs = 0;
        for (string word : words){
            string reversedWord = word;
            reverse(reversedWord.begin(), reversedWord.end());
            if (waitingRoom.find(reversedWord) != waitingRoom.end()){
                pairs++;
                waitingRoom.erase(reversedWord);
            } else{
                waitingRoom.insert(word);
            }
        }
        return pairs;
    }
};
