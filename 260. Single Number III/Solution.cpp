class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorAll = 0;
        for (int num : nums) {
            xorAll ^= num;
        }
        long diff = xorAll & (-xorAll);
        int num1 = 0, num2 = 0;
        for (int num : nums) {
            if (num & diff) {
                num1 ^= num;
            } else {
                num2 ^= num;
            }
        }
        return {num1, num2};
    }
};
