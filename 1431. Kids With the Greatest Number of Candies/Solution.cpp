class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr;
        int largest = candies[0];
         for (int i = 0; i < candies.size(); i++){
            if (candies[i] > largest){
                largest = candies[i];

            }
        }
        for (int j = 0; j < candies.size(); j++){
            if (candies[j] + extraCandies >= largest){
                arr.push_back(true);
            }
            else{
                arr.push_back(false);
            }
        }
        return arr;
    }
};
