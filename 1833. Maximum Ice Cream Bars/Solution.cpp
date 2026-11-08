#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = 0;
        for(int cost : costs) maxCost = max(maxCost, cost);
        vector<int> count(maxCost + 1, 0);
        for(int cost : costs) count[cost]++;
        int bought = 0;
        for(int i = 1; i <= maxCost; i++){
            if(count[i] == 0) continue;
            int canBuy = min(count[i], coins / i);
            bought += canBuy;
            coins -= canBuy * i;
            if(coins == 0) break;
        }
        return bought;
    }
};
