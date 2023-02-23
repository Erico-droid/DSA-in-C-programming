// Write a program in C to reverse a string using recursion. Go to the editor
// Test Data :
// Input any string: w3resource
// Expected Output:

// The reversed string is: ecruoser3w
#include<stdio.h>

int reverse(char* str) {
    static signed int idx = 0;
    if (str[idx] == '\0')
        return 0;
    else {
        printf("%c", str[idx]);
        idx++;
        reverse(str);
        printf("\n");
        printf("%c", str[idx]);
        idx--;
    }
}

int main() {
    char* name = "w3resource";
    reverse(name);
    return 0;
}