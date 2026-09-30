class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums){
            int digits = (int)std::log10(num) + 1;//floor(log10(num)) + 1 gives u digit count
            if (digits % 2 == 0) count++;
       }
       return count;
    }
};
