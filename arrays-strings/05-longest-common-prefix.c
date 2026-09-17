#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][100], int size) {
    static char prefix[100];
    strcpy(prefix, strs[0]);

    for(int i = 1; i < size; i++) {
        int j = 0;
        while(prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
    }
    return prefix;
}

int main() {
    char strs[3][100] = {"flower", "flow", "flight"};
    int size = 3;

    char* result = longestCommonPrefix(strs, size);
    if(strlen(result) > 0)
        printf("Longest Common Prefix: %s\n", result);
    else
        printf("No common prefix\n");

    return 0;
}
