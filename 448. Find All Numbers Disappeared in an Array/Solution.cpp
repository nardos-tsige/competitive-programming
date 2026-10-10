#include <vector>
#include <unordered_set>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> checklist;
        //fill the checklist with 1 to n
        for (int i = 1; i <= n; i++) {
            checklist.insert(i);
        }
        //remove numbers that are present in nums
        for (int num : nums) {
            checklist.erase(num);
        }
        //whatever is left is missing
        vector<int> result(checklist.begin(), checklist.end());
        return result;
    }
};
