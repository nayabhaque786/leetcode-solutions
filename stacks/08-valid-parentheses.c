#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if(top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if(top >= 0) {
        return stack[top--];
    }
    return '\0';
}

bool isValid(char *s) {
    top = -1;
    for(int i = 0; i < strlen(s); i++) {
        char c = s[i];
        if(c == '(' || c == '{' || c == '[') {
            push(c);
        } else {
            if(top == -1) return false;
            char topChar = pop();
            if((c == ')' && topChar != '(') ||
               (c == '}' && topChar != '{') ||
               (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    char s1[] = "({[]})";
    char s2[] = "({[})";

    printf("%s -> %s\n", s1, isValid(s1) ? "Valid" : "Invalid");
    printf("%s -> %s\n", s2, isValid(s2) ? "Valid" : "Invalid");

    return 0;
}
