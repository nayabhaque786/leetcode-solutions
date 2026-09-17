## Problem: Best Time to Buy and Sell Stock (Easy–Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I tracked the minimum price seen so far and calculated profit at each step. This greedy approach ensures maximum profit.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Edge case: prices always decreasing → profit is 0.  
Learned that brute force (checking all pairs) is too slow.
