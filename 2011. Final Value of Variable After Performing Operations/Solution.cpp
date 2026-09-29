class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for (string oper : operations) {
            if (oper == "--X" || oper == "X--"){
                X -= 1;
            }else if (oper == "++X" || oper == "X++"){
                X += 1;
            }
        }
        return X;
    }
};
