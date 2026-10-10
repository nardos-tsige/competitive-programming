class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> seen;//initializing set because no repeated element is allowed 
        string num = "";
        for (int i = 0; i <= word.size(); i++) {
            if (i < word.size() && isdigit(word[i])) {
                num += word[i];
            } else {
                if (!num.empty()) {
                    int j = 0;
                    while (j < num.size() - 1 && num[j] == '0') {
                        j++;
                    }
                    seen.insert(num.substr(j));
                    num = "";
                }
            }
        }
        return seen.size();
    }
};
