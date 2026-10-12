class Solution {
public:
    bool threeFibonacciSum(int n) {
        //the sum of 3 consecutive fibonacci numbers is always even.
        if (n % 2 != 0) {
            return false;
        }
        int target = n / 2; 
        //generate fibonacci numbers to see if 'target' is one of them.
        int a = 0;
        int b = 1;
        while (b < target) {
            int next = a + b;
            a = b;
            b = next;
        }
        //now if b equals target, we found it!
        return b == target;
    }
};
