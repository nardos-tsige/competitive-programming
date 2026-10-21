#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums){
            int sum = 0;
            int count = 0;
            for (int i = 1; i * i <= num; i++){
                if (num % i == 0){
                    sum += i;
                    count++;
                    if (i * i != num){
                        sum += num / i;
                        count++;
                    }
                }
                if (count > 4) break;
            }
            if (count == 4){
                totalSum+=sum;
            }
        }
        return totalSum;
    }
};
