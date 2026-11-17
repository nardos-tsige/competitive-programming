#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int score = 0;
        for(int i = 0; i < m; i++){
            if(grid[i][0] == 0){
                for(int j = 0; j < n; j++){
                    grid[i][j] ^= 1;
                }
            }
        }
        for(int j = 0; j < n; j++){
            int countOnes = 0;
            for (int i = 0; i < m; i++) {
                countOnes += grid[i][j];
            }
            int maxOnes = max(countOnes, m - countOnes);
            score += maxOnes * pow(2, n - 1 - j);
        }
        return score;
    }
};
