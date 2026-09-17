## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
I checked all pairs of numbers to see if they add up to the target. This brute force method is simple and works for small arrays.

### Complexity
- Time: O(n^2)
- Space: O(1)

### Notes
Edge case: arrays with duplicate numbers like [3,3].  
Next time, I’d use a hash map to reduce time to O(n).
