## Problem: Valid Parentheses (Easy–Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used a stack to push opening brackets and pop when a matching closing bracket appears.

### Complexity
- Time: O(n)
- Space: O(n) (stack)

### Notes
Edge case: empty string is valid.  
Learned that mismatched closing brackets must be handled immediately.
