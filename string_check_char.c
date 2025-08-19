//WAP to check if a given character is present in a string or not.
#include <stdio.h>
#include <string.h>


void checkChar(char str[], char ch) {
	
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Character '%c' is present.\n", ch);
            return;
        }
    }
    printf("Character '%c' is not present.\n", ch);
}

int main() {
    char str[] = "Akhil Hamal";
    char ch = 'a';
    checkChar(str, ch);
    return 0;
}
