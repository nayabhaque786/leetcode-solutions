#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to sort characters in a string (simple bubble sort)
void sortString(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len - 1; i++) {
        for(int j = i + 1; j < len; j++) {
            if(str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

bool isAnagram(char s[], char t[]) {
    if(strlen(s) != strlen(t)) return false;
    sortString(s);
    sortString(t);
    return strcmp(s, t) == 0;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";

    if(isAnagram(s1, s2))
        printf("Valid Anagram\n");
    else
        printf("Not an Anagram\n");

    return 0;
}
