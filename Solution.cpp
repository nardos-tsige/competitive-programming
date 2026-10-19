#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> counts;
        for (const string& s : arr){
            counts[s]++;
        }
        for (const string& s : arr){
            if (counts[s] == 1){
                k--;
                if (k == 0){
                    return s;
                }
            }
        }
        return "";
    }
};
