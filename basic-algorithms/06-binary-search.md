## Problem: Binary Search (Easy–Medium)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used the standard binary search algorithm: repeatedly divide the array in half until the target is found.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Edge case: target not found → return -1.  
Important to handle mid calculation carefully to avoid overflow in C/C++.
