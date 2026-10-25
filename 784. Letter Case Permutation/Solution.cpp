#include <vector>
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        string current = "";
        backtrack(s, 0, current, result);
        return result;
    }
private:
    void backtrack(string& s, int index, string& current, vector<string>& result) {
        if(index == s.length()){
            result.push_back(current);
            return;
        }
        char c = s[index];
        if(isdigit(c)){
            current.push_back(c);
            backtrack(s, index + 1, current, result);
            current.pop_back();
        }else{
            current.push_back(tolower(c));
            backtrack(s, index + 1, current, result);
            current.pop_back();
            
            current.push_back(toupper(c));
            backtrack(s, index + 1, current, result);
            current.pop_back();
        }
    }
};
