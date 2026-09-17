#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    char temp;

    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[] = "Hello, World!";
    int size = strlen(str); // length of string excluding '\0'

    printf("Original string: %s\n", str);

    reverseString(str, size);

    printf("Reversed string: %s\n", str);

    return 0;
}
