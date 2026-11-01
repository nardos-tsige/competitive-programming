#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCounts;
        stringstream ss1(s1);
        string word;
        while(ss1 >> word){
            wordCounts[word]++;
        }
        stringstream ss2(s2);
        while(ss2 >> word){
            wordCounts[word]++;
        }
        vector<string> result;
        for(auto& pair : wordCounts){
            if(pair.second == 1){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};
