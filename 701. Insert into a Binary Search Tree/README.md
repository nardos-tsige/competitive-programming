## 701. Insert into a Binary Search Tree
Solved
Medium
Topics
premium lock icon
Companies
You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

Notice that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

 

## Example 1:
<img width="752" height="221" alt="image" src="https://github.com/user-attachments/assets/044c7c3b-0579-46fe-b5f4-cf63a8185cb5" />


Input: root = [4,2,7,1,3], val = 5
Output: [4,2,7,1,3,5]
Explanation: Another accepted tree is:
<img width="352" height="301" alt="image" src="https://github.com/user-attachments/assets/f0d403ef-6687-464c-9f74-f5df50559217" />

## Example 2:

Input: root = [40,20,60,10,30,50,70], val = 25
Output: [40,20,60,10,30,50,70,null,null,25]
## Example 3:

Input: root = [4,2,7,1,3,null,null,null,null,null,null], val = 5
Output: [4,2,7,1,3,5]
 

## Constraints:

The number of nodes in the tree will be in the range [0, 104].
-108 <= Node.val <= 108
All the values Node.val are unique.
-108 <= val <= 108
It's guaranteed that val does not exist in the original BST.
