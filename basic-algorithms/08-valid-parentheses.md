## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Use a stack to keep track of opening brackets. When a closing bracket is encountered, compare it with the most recently opened bracket at the top of the stack. If the brackets do not match, the string is invalid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The string is valid only when every closing bracket matches the correct opening bracket and the stack is empty at the end.
