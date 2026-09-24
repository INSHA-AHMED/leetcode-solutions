## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Track the minimum stock price seen so far while scanning the array. For each day, calculate the profit obtained by selling at the current price after buying at the minimum price, and keep track of the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold. If no profitable transaction is possible, the answer is 0.
