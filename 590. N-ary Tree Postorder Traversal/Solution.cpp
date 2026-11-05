/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }

private:
    void traverse(Node* node, vector<int>& result) {
        if(node == nullptr){
            return;
        }
        for(Node* child : node->children){
            traverse(child, result);
        }
        result.push_back(node->val);
    }
};
