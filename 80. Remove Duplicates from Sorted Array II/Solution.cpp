class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size();
        }
        //"builder" hand starts at index 1.
        //why 1? Because the first two elements(index 0 and 1) 
        // are always allowed to stay. We are building from the 3rd slot onward.
        int builder = 1;
        for (int scanner = 2; scanner < nums.size(); scanner++) {
            if (nums[scanner] != nums[builder - 1]) {
                builder++;
                nums[builder] = nums[scanner];
            }
        }
        return builder + 1;
    }
};
