#include <string>
#include <stack>
#include <cctype>
using namespace std;
class Solution {
public:
    int calculate(string s) {
        stack<long long> stk;
        long long result = 0;
        long long currentNumber = 0;
        int lastSign = 1;
        int n = s.length();
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(isdigit(c)){
                currentNumber = (currentNumber * 10) + (c - '0');
            }else if(c == '('){
                stk.push(result);
                stk.push(lastSign);
                result = 0;
                currentNumber = 0;
                lastSign = 1;
            }else if(c == ')'){
                result += lastSign * currentNumber;
                currentNumber = 0;
                int signInside = stk.top(); stk.pop();
                long long resultOutside = stk.top(); stk.pop();
                result = resultOutside + signInside * result;
            } else if(c == '+' || c == '-'){
                result += lastSign * currentNumber;
                currentNumber = 0;
                lastSign = (c == '+') ? 1 : -1;
            }
        }
        result += lastSign * currentNumber;
        return (int)result;
    }
};
