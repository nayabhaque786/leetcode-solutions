## Problem: Longest Common Prefix (Easy–Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I compared characters column by column across all strings until a mismatch occurred.

### Complexity
- Time: O(n * m) (n = number of strings, m = length of shortest string)
- Space: O(1)

### Notes
Edge case: empty string in the list → prefix is empty.  
Alternative: sort strings and compare first and last.
