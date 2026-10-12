## 4078. Three Fibonacci Sum
Solved
Easy
premium lock icon
Companies
Hint
You are given an integer n.

The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the previous two numbers. Its first few terms are 0, 1, 1, 2, 3, 5, 8, 13, ....

Return true if n can be expressed as the sum of three consecutive terms in the Fibonacci sequence, and false otherwise.

 

## Example 1:

Input: n = 16

Output: true

Explanation:

The three consecutive terms 3, 5, and 8 have a sum of 3 + 5 + 8 = 16.

## Example 2:

Input: n = 8

Output: false

Explanation:

Although 1 + 2 + 5 = 8, these terms are not consecutive in the Fibonacci sequence. No three consecutive terms have a sum of 8.

## Example 3:

Input: n = 2

Output: true

Explanation:

The first three terms have a sum of 0 + 1 + 1 = 2.

 

## Constraints:

1 <= n <= 10
