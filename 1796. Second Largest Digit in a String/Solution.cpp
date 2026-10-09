class Solution {
public:
    int secondHighest(string s) {
        bool seen[10] = {false};
        for (char c : s)
            if (isdigit(c)) seen[c - '0'] = true;
        int count = 0;
        for (int i = 9; i >= 0; --i) {
            if (seen[i]) {
                count++;
                if (count == 2) return i;
            }
        }
        return -1;
    }
};
