## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

Use a brute-force approach by checking every pair of elements in the array. For each element, compare it with the elements that come after it and check whether their sum equals the target.

When a matching pair is found, return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The two indices must be different. The solution returns the indices of the first pair whose values add up to the target.
