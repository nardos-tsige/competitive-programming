class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int currentNumber = 1;
        int index = 0;
        while (true) {
            if (index < arr.size() && arr[index] == currentNumber) {
                index++;
            } else {
                k--;
                if (k == 0) {
                    return currentNumber;
                }
            }
            currentNumber++;
        }
    }
};
