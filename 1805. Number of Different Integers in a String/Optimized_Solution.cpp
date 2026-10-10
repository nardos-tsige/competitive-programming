class Solution {
public:
    int numDifferentIntegers(string word) {
        //replace every letter with a space
        for (char &c : word) {
            if (isalpha(c)) {
                c = ' ';
            }
        }
        //extract numbers and clean leading zeros
        unordered_set<string> seen;
        stringstream ss(word);
        string num;
        
        while (ss >> num) {
            int i = 0;
            while (i < num.length() - 1 && num[i] == '0') {
                i++;
            }
            seen.insert(num.substr(i));
        }
        return seen.size();
    }
};
