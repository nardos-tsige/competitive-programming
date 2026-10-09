class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        for (int i = 0; i < n; i++) {
            //check if current character is the start of a word
            if (i == 0 || title[i - 1] == ' ') {
                //find the length of the current word
                int j = i;
                while (j < n && title[j] != ' ') {
                    j++;
                }
                int wordLength = j - i;
                //apply rules based on word length
                if (wordLength <= 2) {
                    //change all letters of this word to lowercase
                    for (int k = i; k < j; k++) {
                        title[k] = tolower(title[k]);
                    }
                } else {
                    //capitalize first letter, lowercase the rest
                    title[i] = toupper(title[i]);
                    for (int k = i + 1; k < j; k++) {
                        title[k] = tolower(title[k]);
                    }
                }
            }
        }
        return title;
    }
};
