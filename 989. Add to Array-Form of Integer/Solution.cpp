#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1; 
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
            }
            if (i >= 0) {
                num[i] = k % 10;
            } else {
                num.insert(num.begin(), k % 10); 
            }
            k /= 10;
            i--;
        }
        return num;
    }
};
