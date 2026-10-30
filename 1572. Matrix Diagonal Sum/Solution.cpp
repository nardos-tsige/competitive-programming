#include <vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += mat[i][i];
            int secondaryCol = n - 1 - i;
            if (i != secondaryCol) {
                sum += mat[i][secondaryCol];
            }
        }
        return sum;
    }
};
