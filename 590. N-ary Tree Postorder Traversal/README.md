## 590. N-ary Tree Postorder Traversal
Solved
Easy
Topics
premium lock icon
Companies
Given the root of an n-ary tree, return the postorder traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)

 

## Example 1:
<img width="781" height="502" alt="image" src="https://github.com/user-attachments/assets/4463c6dd-1d42-4f80-9b42-f3b3778a9b29" />


Input: root = [1,null,3,2,4,null,5,6]
Output: [5,6,3,2,4,1]
## Example 2:
<img width="596" height="541" alt="image" src="https://github.com/user-attachments/assets/fdc06223-2298-49c4-8f74-ce3f739cfd25" />


Input: root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
Output: [2,6,14,11,7,3,12,8,4,13,9,10,5,1]
 

## Constraints:

The number of nodes in the tree is in the range [0, 104].
0 <= Node.val <= 104
The height of the n-ary tree is less than or equal to 1000.
 

Follow up: Recursive solution is trivial, could you do it iteratively?
