## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I sorted both strings and compared them. If they match, it’s an anagram.

### Complexity
- Time: O(n log n) (due to sorting)
- Space: O(1)

### Notes
Edge case: strings of different lengths immediately return false.  
Alternative: use a frequency counter for O(n).
