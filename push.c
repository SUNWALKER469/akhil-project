// WAP to reverse a number using while loop
#include<stdio.h>

int main ()
{
    int x, rev_num = 0;  // Declare input number and reversed number
    printf("Akhil Hamal\n");

    printf("Enter any number: ");
    scanf("%d", &x);  // Use %d and int, not %f and float

    while(x > 0) {
        rev_num = rev_num * 10 + x % 10;  // Get last digit and build reversed number
        x = x / 10;  // Remove last digit
    }

    printf("Reversed number: %d\n", rev_num);

    return 0;
}
