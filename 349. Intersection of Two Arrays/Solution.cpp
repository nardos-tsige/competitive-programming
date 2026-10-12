#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen(nums1.begin(), nums1.end());
        unordered_set<int> resultSet;
        for (int num : nums2) {
            if (seen.count(num)) {
                resultSet.insert(num);
            }
        }
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};
