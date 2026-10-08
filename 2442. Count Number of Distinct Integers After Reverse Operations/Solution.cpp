class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> distinct(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int rev = 0;
            int val = nums[i];
            while (val > 0) {
                rev = rev * 10 + val % 10;
                val /= 10;
            }
            distinct.insert(rev);
        }
        return distinct.size();
    }
};
