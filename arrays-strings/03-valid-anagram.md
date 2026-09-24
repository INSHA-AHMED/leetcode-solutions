## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Use a frequency array of size 26 to count the occurrences of each lowercase letter in the first string. Decrease the corresponding counts using the second string. If all counts become zero, both strings contain the same characters with the same frequencies.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The frequency array has a fixed size of 26 because the problem uses lowercase English letters.
