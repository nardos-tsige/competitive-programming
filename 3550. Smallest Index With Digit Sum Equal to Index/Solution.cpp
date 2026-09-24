class Solution {
public:
    int smallestIndex(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int digit_sum = 0;
            int temp = nums[i];
            
            while (temp > 0) {
                digit_sum += temp % 10;
                temp /= 10;
            }
            
            if (digit_sum == i) {
                return i;
            }
        }
        
        return -1;
    }
};
