class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> freq(26, 0);
        for (char c : word1) {
            freq[c - 'a']++;
        }
        for (char c : word2) {
            freq[c - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (abs(freq[i]) > 3) {
                return false;
            }
        }
        return true;
    }
};
