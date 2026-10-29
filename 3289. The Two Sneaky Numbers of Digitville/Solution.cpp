#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> result;
        for(int num : nums){
            if(seen.count(num)){
                result.push_back(num);
                seen.erase(num);
            }else{
                seen.insert(num);
            }
        }
        return result;
    }
};
