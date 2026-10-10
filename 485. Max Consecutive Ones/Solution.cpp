class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        for (int num: nums){
            if (num == 1){
                currentCount++;
                maxCount = max(maxCount, currentCount);
            }else{
                currentCount = 0;
            }
        }
        return maxCount;
    }
};
