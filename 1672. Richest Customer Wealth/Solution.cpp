#include <vector>
#include <numeric>
#include <algorithm>
class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int max_wealth = 0;
        
        for (const auto& customer : accounts) {
            int current_wealth = std::accumulate(customer.begin(), customer.end(), 0);
            max_wealth = std::max(max_wealth, current_wealth);
        }
        
        return max_wealth;
    }
};
