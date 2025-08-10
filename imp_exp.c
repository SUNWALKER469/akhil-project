//WAP to print a-z using a explicit and implicit type conversion
#include <stdio.h>

int main() {
    char ch;

    printf("Using implicit type conversion:\n");
    for (int i = 97; i <= 122; i++) { // ASCII values for 'a' to 'z'
        ch = i; // Implicit conversion from int to char
        printf("%c ", ch);
    }

    printf("\n\nUsing explicit type conversion:\n");
    for (int i = 97; i <= 122; i++) {
        ch = (char)i; // Explicit conversion from int to char
        printf("%c ", ch);
    }

    return 0;
}
