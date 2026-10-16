#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string result(n, ' ');
        for (int i = 0; i < n; i++){
            result[indices[i]] = s[i];
        }
        return result;
    }
};
