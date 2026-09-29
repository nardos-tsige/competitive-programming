class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 1;
        vector<int> nums;
        for (string i : sentences){
            int count = 1;
            for (int j= 0; j < i.size(); j++){
                if (i[j] == ' '){
                    count += 1;
                }
            }
            nums.push_back(count);
        }
        int maximum = *std::max_element(nums.begin(), nums.end());
        return maximum;
    }
};
