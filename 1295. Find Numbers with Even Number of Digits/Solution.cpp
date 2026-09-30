class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum = 0;
        for (int num: nums){
            std::string s = std::to_string(num);
            if (s.size() %2 == 0){
                sum += 1;
            }
            else{
                continue;
            }
        }
        return sum;
    }
};
