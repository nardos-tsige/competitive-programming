class Solution {
public:
    string reverseByType(string s) {
        string letters, specials;
        for (char c : s) {
            if (islower(c)) {
                letters += c;
            } else {
                specials += c;
            }
        }
        reverse(letters.begin(), letters.end());
        reverse(specials.begin(), specials.end());
        int li = 0, si = 0;
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) {
                s[i] = letters[li++];
            } else {
                s[i] = specials[si++];
            }
        }
        return s;
    }
};
