#include <vector>
using namespace std;
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(int p : nums){
            if(p == 2){
                ans.push_back(-1);
                continue;
            }
            int x = p / 2;
            while(true){
                if((x | (x + 1)) == p){
                    ans.push_back(x);
                    break;
                }
                x++;
            }
        }
        return ans;
    }
};
