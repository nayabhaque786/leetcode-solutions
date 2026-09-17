#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Take the first string as the initial prefix
    char* prefix = strs[0];
    int prefixLen = strlen(prefix);

    // Compare with each subsequent string
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixLen && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefixLen = j;  // shorten prefix length
        if (prefixLen == 0) return "";  // no common prefix
    }

    // Allocate memory for the result
    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(result, prefix, prefixLen);
    result[prefixLen] = '\0';

    return result;
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = sizeof(strs) / sizeof(strs[0]);

    char* prefix = longestCommonPrefix(strs, strsSize);

    if (strlen(prefix) > 0) {
        printf("Longest Common Prefix: %s\n", prefix);
    } else {
        printf("No common prefix found.\n");
    }

    free(prefix); // free allocated memory
    return 0;
}
