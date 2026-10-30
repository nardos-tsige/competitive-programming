#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i = 0; i < n; i++){
            int left = 0;
            int right = n - 1;
            while(left <= right){
                int leftVal = image[i][left];
                int rightVal = image[i][right];
                
                image[i][left] = 1 - rightVal;
                image[i][right] = 1 - leftVal;
                
                left++;
                right--;
            }
        }
        return image;
    }
};
