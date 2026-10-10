class Solution {
public:
    string removeDuplicates(string s) {
        string stack ="";
        for (char currentLetter : s) {
            if (!stack.empty() && stack.back() == currentLetter) {
                //they are the same. so throw away the top of the stack.
                stack.pop_back();
                
            } else {
                //they are different(or stack is empty).place the new letter on top.
                stack.push_back(currentLetter);            
            }
        }
        return stack;
    }
};
