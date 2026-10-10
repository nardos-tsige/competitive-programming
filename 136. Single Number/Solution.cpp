class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        //XOR every number in the array
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
