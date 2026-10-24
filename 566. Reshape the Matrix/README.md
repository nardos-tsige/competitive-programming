## 566. Reshape the Matrix
Solved
Easy
Topics
premium lock icon
Companies
Hint
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

## Example 1:
<img width="613" height="173" alt="image" src="https://github.com/user-attachments/assets/98a7fdcd-8808-4e78-8f8f-33b2eef8a3f1" />


Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
## Example 2:
<img width="453" height="173" alt="image" src="https://github.com/user-attachments/assets/bccdad03-2fea-4aaa-86f8-21cf9934c43a" />


Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]
 

## Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 100
-1000 <= mat[i][j] <= 1000
1 <= r, c <= 300
