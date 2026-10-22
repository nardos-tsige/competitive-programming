class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        int currentNum = start;
        for(int i = 0; i<n; i++){
            result = result ^ currentNum;
            currentNum += 2;
        }
        return result;
    }
};
