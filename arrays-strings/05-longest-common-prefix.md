## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Start with the first string as the reference prefix and compare it with each remaining string. The prefix length is reduced whenever the characters no longer match, leaving the longest prefix common to all strings.

### Complexity

- Time: O(S)
- Space: O(n)

### Notes

If there is no common prefix, the function returns an empty string.
