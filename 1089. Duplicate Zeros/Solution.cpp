class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        int n = arr.size();
        for (int i = 0; i < n; i++){
            if (arr[i] == 0) {
                temp.push_back(0);
                temp.push_back(0);
            }else {
                temp.push_back(arr[i]);
            }
            if (temp.size() >= n) {
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};
