## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Use a pointer to track the position where the next non-zero element should be placed. Scan through the array, move every non-zero element forward, and fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements is preserved, and the array is modified in-place.
