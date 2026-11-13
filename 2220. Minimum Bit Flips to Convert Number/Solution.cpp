class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start ^ goal;
        int count = 0;
        while(x > 0){
            x = x & (x - 1);
            count++;
        }
        return count;
    }
};
