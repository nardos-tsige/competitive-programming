#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        int productSoFar = 1;
        for (int i = 0; i < n; i++){
            answer[i] = productSoFar;
            productSoFar = productSoFar * nums[i];
        }
        productSoFar = 1;
        for (int i = n - 1; i >= 0; i--){
            answer[i] = answer[i] * productSoFar;
            productSoFar = productSoFar * nums[i];
        }
        return answer;
    }
};
