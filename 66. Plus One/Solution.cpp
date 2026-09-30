class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        
        digits.insert(digits.begin(), 1);//if the loop finishes without returning, it means every digit was 9(e.g., [9, 9, 9])
        return digits;
    }
};
