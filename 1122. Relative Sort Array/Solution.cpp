#include <vector>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxVal = 0;
        for(int num : arr1) maxVal = max(maxVal, num);
        vector<int> counts(maxVal + 1, 0);
        for(int num : arr1) counts[num]++;
        vector<int> result;
        result.reserve(arr1.size());
        for(int num : arr2) {
            while(counts[num] > 0){
                result.push_back(num);
                counts[num]--;
            }
        }
        for(int i = 0; i <= maxVal; i++){
            while(counts[i] > 0){
                result.push_back(i);
                counts[i]--;
            }
        }
        return result;
    }
};
