class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for (string word : words) {
            int start = 0;
            for (int i = 0; i <= word.length(); i++) {
                if (i == word.length() || word[i] == separator) {
                    if (i > start) {
                        result.push_back(word.substr(start, i - start));
                    }
                    start = i + 1;
                }
            }
        }
        return result;
    }
};
