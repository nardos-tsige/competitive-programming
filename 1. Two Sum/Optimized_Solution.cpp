class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* vector<int> result;
        for (auto i = nums.begin(); i != nums.end(); ++i){
            auto j = find(i + 1, nums.end(), target - *i);
            if (j != nums.end()){//if the second number is found
                result.push_back(i - nums.begin());
                result.push_back(j - nums.begin());
                break;
            }
        }
        return result;
    */
        unordered_map<int, int> _map;
        for (int i = 0; i < nums.size(); ++i){
            int num = nums[i];
            int complement = target - num;
            auto it = _map.find(complement);
            if (it != _map.end()){//found 
                return {it -> second, i};
            }
            _map[num] = i;
        }
        return {};
    }
};
