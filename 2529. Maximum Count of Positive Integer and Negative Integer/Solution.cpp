#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        for(int num : nums){
            if(num > 0){
                pos++;
            }else if(num < 0){
                neg++;
            }
        }
        return max(pos, neg);
    }
};
