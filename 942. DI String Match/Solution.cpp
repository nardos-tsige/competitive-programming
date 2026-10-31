#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int low = 0;
        int high = n;
        vector<int> result;
        for(char c : s){
            if(c == 'I'){
                result.push_back(low);
                low++;
            }else{
                result.push_back(high);
                high--;
            }
        }
        result.push_back(low);
        return result;
    }
};
