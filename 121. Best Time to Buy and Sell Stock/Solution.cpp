#include <cmath>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_price = prices[0];
        for(int price : prices){
            min_price = min(price, min_price);
            profit = max(profit, price - min_price);
        }
        return profit;
    }
};
