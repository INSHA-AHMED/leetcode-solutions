## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers to represent the current search range. Check the middle element and eliminate half of the remaining search range depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works because the input array is sorted. If the target is not found, the function returns -1.
