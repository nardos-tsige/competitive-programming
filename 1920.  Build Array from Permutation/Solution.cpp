class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int getArrayLength = nums.size();
        for (int i = 0; i < getArrayLength; ++i){
            int j = nums[i];
            ans.push_back(nums.at(j));
        }
        return ans;
    }
};
