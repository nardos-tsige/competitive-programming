class Solution {
public:
    bool detectCapitalUse(string word) {
        string upper = word;
        string lower = word;
        string firstUpper = word;
        for (char &c : upper) c = toupper(c);
        for (char &c : lower) c = tolower(c);
        firstUpper[0] = toupper(firstUpper[0]);
        for (int i = 1; i < firstUpper.length(); i++) {
            firstUpper[i] = tolower(firstUpper[i]);
        }

        return word == upper || word == lower || word == firstUpper;
    }
};
