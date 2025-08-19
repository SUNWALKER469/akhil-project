//WAP to check if a given character is present in a string or not.
#include<stdio.h>
#include<string.h>

void checkchar (char str[], char ch);

int main()
{
    char str[] = "Akhil Hamal";
    check ch = 'a';
    check char(str,ch);
}
void checkchar (char str[], char ch) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(Str[i] == ch) {
            printf("character is present");
            return 0;
    }
    }
    printf("character is not present:");
}