#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++){
            sort(grid[i].begin(), grid[i].end());
        }
        int totalSum = 0;
        for(int j = 0; j < n; j++){
            int maxInCol = 0;
            for(int i = 0; i < m; i++){
                maxInCol = max(maxInCol, grid[i][j]);
            }
            totalSum += maxInCol;
        }
        return totalSum;
    }
};
