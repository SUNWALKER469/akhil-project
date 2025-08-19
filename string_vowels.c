//WAF to count the occurence of vowels in string using if condition and count++.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // make it lowercase
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }
    return count;
}

int main() {
    char str[] = "Hello World";
    printf("Akhil Hamal\n");
    printf("Vowels are: %d\n", countVowels(str));
    return 0;
}
