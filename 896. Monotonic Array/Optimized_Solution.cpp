class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) isDecreasing = false;
            if (nums[i] < nums[i - 1]) isIncreasing = false;
            //if both are false, we can stop early
            if (!isIncreasing && !isDecreasing) {
                return false;
            }
        }
        return true;
    }
};
