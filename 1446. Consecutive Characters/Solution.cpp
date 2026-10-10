class Solution {
public:
    int maxPower(string s) {
        int max_power = 1;
        int count = 1;
        for (int i = 1; i < s.length(); i++) {
            count = (s[i] == s[i - 1]) ? count + 1 : 1;//implementing ternary operator here
            max_power = max(max_power, count);
        }
        return max_power;
    }
};
