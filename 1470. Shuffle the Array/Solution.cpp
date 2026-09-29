class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> firstHalf;
        vector<int> secondHalf;
        vector<int> result;
    
    //split into two arrays
        for (int i = 0; i < n; i++) {
            firstHalf.push_back(nums[i]);
        }
        for (int i = n; i < 2 * n; i++) {
            secondHalf.push_back(nums[i]);
        }
    
        //attach one after the other
        for (int i = 0; i < n; i++) {
            result.push_back(firstHalf[i]);
            result.push_back(secondHalf[i]);
        }
    
        return result;

    }
};
