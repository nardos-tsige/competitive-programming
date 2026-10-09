class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> words;
        int spacesCount = 0;
        stringstream ss(text);
        string word;
        for (char c : text) {
            if (c == ' ') spacesCount++;
        }
        while (ss >> word) {
            words.push_back(word);
        }
        int wordsCount = words.size();
        string result = "";
        if (wordsCount == 1) {
            result += words[0];
            result += string(spacesCount, ' ');
            return result;
        }
        int spacesBetween = spacesCount / (wordsCount - 1);
        int extraSpaces = spacesCount % (wordsCount - 1);
        for (int i = 0; i < wordsCount; i++) {
            result += words[i];
            if (i < wordsCount - 1) {
                result += string(spacesBetween, ' ');
            }
        }
        result += string(extraSpaces, ' ');
        return result;
    }
};
