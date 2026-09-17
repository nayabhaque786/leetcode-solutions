#include <stdio.h>
#include <stdbool.h>

// Function to check valid parentheses
bool isValid(char* s) {
    char stack[10000]; // stack to hold opening brackets
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c; // push opening bracket
        } else {
            if (top == -1) return false; // stack empty, invalid
            char topChar = stack[top--]; // pop
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false; // mismatch
            }
        }
    }
    return top == -1; // valid if stack empty at end
}

int main() {
    char s1[] = "({[]})";
    char s2[] = "({[})";
    char s3[] = "()[{}]";

    printf("%s -> %s\n", s1, isValid(s1) ? "Valid" : "Invalid");
    printf("%s -> %s\n", s2, isValid(s2) ? "Valid" : "Invalid");
    printf("%s -> %s\n", s3, isValid(s3) ? "Valid" : "Invalid");

    return 0;
}
