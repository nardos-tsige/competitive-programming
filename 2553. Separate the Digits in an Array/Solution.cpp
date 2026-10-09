class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for (int num : nums) {
            string s = to_string(num);
            for (char c : s) {
                result.push_back(c - '0');
            }
        }
        return result;
    }
};
