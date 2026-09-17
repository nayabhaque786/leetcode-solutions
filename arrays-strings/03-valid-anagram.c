#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if two strings are anagrams
bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    // Count characters in s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract characters in t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char s1[] = "listen";
    char t1[] = "silent";

    char s2[] = "hello";
    char t2[] = "world";

    printf("\"%s\" and \"%s\" -> %s\n", s1, t1, isAnagram(s1, t1) ? "Anagram" : "Not Anagram");
    printf("\"%s\" and \"%s\" -> %s\n", s2, t2, isAnagram(s2, t2) ? "Anagram" : "Not Anagram");

    return 0;
}
